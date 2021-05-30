#define ntEXC2_0001100_cxx
#include "ntEXC2_0001100.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <Python.h>
#include <iostream>
#include <algorithm>
#define NGRAPH 195

void ntEXC2_0001100::Loop(TTree * tout, float *graph_0_0, int njobs, int job_idx, float &btag1, float & btag2, float &bblikeness, float & ctag1, float & ctag2, float &cclikeness)
{
//   In a ROOT session, you can do:
//      root> .L ntEXC2_0001100.C
//      root> ntEXC2_0001100 t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   int nentries = fChain->GetEntries();
   int firstentry = 0; int lastentry = 0;
   int k1 = nentries/njobs; int m1 = nentries%njobs;
   if(m1 == 0){firstentry = job_idx*k1;  lastentry = (job_idx+1)*k1-1;}
   else{
       int k2 = k1+1; firstentry = job_idx*k2; lastentry = std::min(nentries-1,(job_idx+1)*k2-1);
   }

   Py_Initialize();
   PyRun_SimpleString("import sys; import os; sys.path.append(os.getcwd())");
/*
   Long64_t nentries = 100;
*/
   int nbytes = 0, nb = 0;
   for (int jentry=firstentry; jentry<=lastentry;jentry++) {
/*
      if(jentry%2000==0)
      std::cout<<"jentry = "<<jentry<<std::endl;
*/
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      for(int i = 0 ;i<NGRAPH;i++){
          graph_0_0[i] = 0;
      }
      PyObject *pModule,*pFunc;
      PyObject *pArgs, *pValue;

      const int nParticles = JetnPFOP1+JetnPFOP2;
      PyObject * pEvent = PyTuple_New(nParticles*4);
      pModule = PyImport_Import(PyString_FromString("EFPTest"));
      pFunc = PyObject_GetAttrString(pModule,"EFPCalc");
      pArgs = PyTuple_New(1);


      for(int i =0 ;i<JetnPFOP1;i++){
             PyTuple_SetItem(pEvent,4*i,PyFloat_FromDouble(JetPFOEnP1[i]));
             PyTuple_SetItem(pEvent,4*i+1,PyFloat_FromDouble(JetPFOPxP1[i]));
             PyTuple_SetItem(pEvent,4*i+2,PyFloat_FromDouble(JetPFOPyP1[i]));
             PyTuple_SetItem(pEvent,4*i+3,PyFloat_FromDouble(JetPFOPzP1[i]));
      } 

      for(int i =0 ;i<JetnPFOP2;i++){
             PyTuple_SetItem(pEvent,4*(i+JetnPFOP1),PyFloat_FromDouble(JetPFOEnP2[i]));
             PyTuple_SetItem(pEvent,4*(i+JetnPFOP1)+1,PyFloat_FromDouble(JetPFOPxP2[i]));
             PyTuple_SetItem(pEvent,4*(i+JetnPFOP1)+2,PyFloat_FromDouble(JetPFOPyP2[i]));
             PyTuple_SetItem(pEvent,4*(i+JetnPFOP1)+3,PyFloat_FromDouble(JetPFOPzP2[i]));
      }
      btag1 = float(JetBtagP1) ;  btag2 = float(JetBtagP2);
      ctag1 = float(JetCtagP1) ;  ctag2 = float(JetCtagP2);
      bblikeness = btag1*btag2/(btag1*btag2+(1-btag1)*(1-btag2));
      cclikeness = ctag1*ctag2/(ctag1*ctag2+(1-ctag1)*(1-ctag2));


      PyTuple_SetItem(pArgs,0, pEvent);
      pValue = PyObject_CallObject(pFunc, pArgs);
      for(int i =0; i<NGRAPH; i++) {
           graph_0_0[i] = float(PyFloat_AsDouble(PyTuple_GetItem(pValue,i)));
      }
      if(graph_0_0[2]<10)   
         tout->Fill();
      Py_DECREF(pModule);  
      Py_DECREF(pFunc); 
      Py_DECREF(pArgs); 
      Py_DECREF(pValue); 
      Py_DECREF(pEvent);
      // if (Cut(ientry) < 0) continue;
   }
   Py_Finalize();
}
