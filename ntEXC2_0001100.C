#define ntEXC2_0001100_cxx
#include "ntEXC2_0001100.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TTree.h>
#include "Header.h"
#include <string>
#include <algorithm>
using namespace std;

bool comp(const particle &a, const particle &b){
   return a.p4.E() > b.p4.E();
}

TLorentzVector erout4(const TLorentzVector& p1, double phi, double theta ){
          double cp = cos(phi);
          double sp = sin(phi);
          double ct = cos(theta);
          double st = sin(theta);
          double t  = p1.E(), x=p1.X(), y=p1.Y(), z=p1.Z();
          double xp=x*cp*ct+y*sp*ct-z*st, yp= -x*sp+y*cp, zp=x*cp*st+y*sp*st+z*ct;
          TLorentzVector Rp(zp,xp,yp,t);
          return Rp;
}

void ntEXC2_0001100::Loop(string outputfile)
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
/*
   Long64_t nentries = fChain->GetEntriesFast();
*/
   Long64_t nentries = fChain->GetEntries();
   Long64_t nbytes = 0, nb = 0;
   TFile fout(outputfile.c_str(),"recreate");
   TTree *tout = new TTree("CMB","");
   double Energy[200]; 
   double Mom[200];
   double THETA[200];
   double PHI[200];
   double D0[200];
   double Z0[200];
   double Prob[200];
   double SIGMAD0[200];
   double SIGMAZ0[200];

   double Charge[200];
   int NPar;
   tout->Branch("Energy",Energy,"Energy[200]/D");
   tout->Branch("Mom",Mom,"Mom[200]/D");
   tout->Branch("THETA",THETA,"THETA[200]/D");
   tout->Branch("PHI",PHI,"PHI[200]/D");
   tout->Branch("D0",D0,"D0[200]/D");
   tout->Branch("Z0",Z0,"Z0[200]/D");
   tout->Branch("SIGMAD0",SIGMAD0,"SIGMAD0[200]/D");
   tout->Branch("SIGMAZ0",SIGMAZ0,"SIGMAZ0[200]/D");
   tout->Branch("Charge",Charge,"Charge[200]/D");
   tout->Branch("Prob",Prob,"Prob[200]/D");
   tout->Branch("NPar",&NPar,"NPar/I");
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if(elec_idx!=0||muon_idx!=0)continue;
/*
      if(IsG_QQ!=0)continue;
*/
/* For H->ww/zz */
/*
      if(nHiggsCascade !=4)continue;

      int n_hf=0;
      int n_lep=0;
      for(int i = 0 ; i<4;i++){
           if(abs(HiggsCascade[i])>=11&&abs(HiggsCascade[i])<=16){n_lep+=1; continue;}
           if(abs(HiggsCascade[i])==4||abs(HiggsCascade[i])==5)n_hf+=1;
      }  
      if(n_lep!=0) continue;
*/
/*
      if(n_hf!=0)continue; 
*/
      vector<particle> v_particle; v_particle.clear(); v_particle.resize(0);
      for(int i =0; i<200;i++){
           Energy[i] = 0;
           Mom[i] = 0;
           D0[i] = 0;
           Z0[i] = 0;
           THETA[i]=-999;
           PHI[i] = -999;
           Charge[i] = -999;
           Prob[i] = -999;
      }
   
      TLorentzVector p_combined = TLorentzVector(0,0,0,0);
   
      TLorentzVector p_Jet1, p_Jet2;
      p_Jet1.SetPxPyPzE(JetPxP1,JetPyP1,JetPzP1,JetEnP1);
      p_Jet2.SetPxPyPzE(JetPxP2,JetPyP2,JetPzP2,JetEnP2);

      vector<double> Jet1D0; vector<double> Jet1Z0 ; vector<double> Jet1TrkD0; vector<double> Jet1TrkZ0 ;
      vector<double> Jet2D0; vector<double> Jet2Z0 ; vector<double> Jet2TrkD0; vector<double> Jet2TrkZ0 ;

      Jet1D0.clear();  Jet1Z0.clear();  Jet1TrkD0.clear(); Jet1TrkZ0.clear();
      Jet2D0.clear();  Jet2Z0.clear();  Jet2TrkD0.clear(); Jet2TrkZ0.clear();

      vector<double> Jet1D0SIGMA; vector<double> Jet1Z0SIGMA ; vector<double> Jet1TrkD0SIGMA; vector<double> Jet1TrkZ0SIGMA ;
      vector<double> Jet2D0SIGMA; vector<double> Jet2Z0SIGMA ; vector<double> Jet2TrkD0SIGMA; vector<double> Jet2TrkZ0SIGMA ;

      Jet1D0SIGMA.clear();  Jet1Z0SIGMA.clear();  Jet1TrkD0SIGMA.clear(); Jet1TrkZ0SIGMA.clear();
      Jet2D0SIGMA.clear();  Jet2Z0SIGMA.clear();  Jet2TrkD0SIGMA.clear(); Jet2TrkZ0SIGMA.clear();
/*
      for(int i =0; i< JetnPFOP1;i++){
           if( JetPFOChargeP1[i] ==0 ) continue;
           Jet1D0.push_back(JetPFOD0P1[i]);
           Jet1Z0.push_back(JetPFOZ0P1[i]);
           Jet1D0SIGMA.push_back(JetPFOSIGMAD0P1[i]);
           Jet1Z0SIGMA.push_back(JetPFOSIGMAZ0P1[i]);
      }

      for(int i =0; i< JetnPFOP2;i++){
           if( JetPFOChargeP2[i] ==0 ) continue;
           Jet2D0.push_back(JetPFOD0P2[i]);
           Jet2Z0.push_back(JetPFOZ0P2[i]);
           Jet2D0SIGMA.push_back(JetPFOSIGMAD0P2[i]);
           Jet2Z0SIGMA.push_back(JetPFOSIGMAZ0P2[i]);
      }

      if(Jet1D0.size()>0){
           for(int i=0; i<Jet1D0.size();i++){
                if(i==0){Jet1TrkD0.push_back(Jet1D0.at(i)); Jet1TrkZ0.push_back(Jet1Z0.at(i)); Jet1TrkD0SIGMA.push_back(Jet1D0SIGMA.at(i)); Jet1TrkZ0SIGMA.push_back(Jet1Z0SIGMA.at(i));}
                else {Jet1TrkD0.push_back(Jet1D0.at(i)-Jet1D0.at(i-1)); Jet1TrkZ0.push_back(Jet1Z0.at(i)-Jet1Z0.at(i-1)); Jet1TrkD0SIGMA.push_back(Jet1D0SIGMA.at(i)-Jet1D0SIGMA.at(i-1)); Jet1TrkZ0SIGMA.push_back(Jet1Z0SIGMA.at(i)-Jet1Z0SIGMA.at(i-1));}
           }
      }

      if(Jet2D0.size()>0){
           for(int i=0; i<Jet2D0.size();i++){
                if(i==0){Jet2TrkD0.push_back(Jet2D0.at(i)); Jet2TrkZ0.push_back(Jet2Z0.at(i)); Jet2TrkD0SIGMA.push_back(Jet2D0SIGMA.at(i)); Jet2TrkZ0SIGMA.push_back(Jet2Z0SIGMA.at(i));}
                else {Jet2TrkD0.push_back(Jet2D0.at(i)-Jet2D0.at(i-1)); Jet2TrkZ0.push_back(Jet2Z0.at(i)-Jet2Z0.at(i-1)); Jet2TrkD0SIGMA.push_back(Jet2D0SIGMA.at(i)-Jet2D0SIGMA.at(i-1)); Jet2TrkZ0SIGMA.push_back(Jet2Z0SIGMA.at(i)-Jet2Z0SIGMA.at(i-1));}
           }
      }

      int trk_idx =0;
*/
      for(unsigned int i =0; i< JetnPFOP1;i++){
          particle tmp_par;
          TLorentzVector tmp_p4(JetPFOPxP1[i],JetPFOPyP1[i],JetPFOPzP1[i],JetPFOEnP1[i]);
/*
          TLorentzVector p_new = erout4(tmp_p4, p_Jet1.Phi(), p_Jet1.Theta());
*/
          tmp_par.p4 = tmp_p4;
/*
          tmp_par.d0 = JetPFOD0P1[i];
          tmp_par.z0 = JetPFOZ0P1[i];
*/
          if(JetPFOChargeP1[i]!=0){
/*
             tmp_par.d0 = Jet1TrkD0.at(trk_idx);
             tmp_par.z0 = Jet1TrkZ0.at(trk_idx);
             tmp_par.sigmad0 = Jet1TrkD0SIGMA.at(trk_idx);
             tmp_par.sigmaz0 = Jet1TrkZ0SIGMA.at(trk_idx);
*/
             if(sqrt(JetPFOD0P1[i]*JetPFOD0P1[i]+JetPFOZ0P1[i]*JetPFOZ0P1[i])<2.5 &&  JetPFOProbP1[i]/JetPFONDOFP1[i]>5.0){
                 tmp_par.d0 = JetPFOD0P1[i];
                 tmp_par.z0 = JetPFOZ0P1[i];
                 tmp_par.sigmad0 = JetPFOSIGMAD0P1[i];
                 tmp_par.sigmaz0 = JetPFOSIGMAZ0P1[i];
                 tmp_par.prob    = JetPFOProbP1[i]/JetPFONDOFP1[i];
             }
          }else{
              tmp_par.d0 = 0;
              tmp_par.z0 = 0;
              tmp_par.sigmad0 = 0;
              tmp_par.sigmaz0 = 0;
              tmp_par.prob = 0;
          }
          tmp_par.charge = JetPFOChargeP1[i];
          v_particle.push_back(tmp_par);

          p_combined += tmp_p4;
//          if(JetPFOChargeP1[i]!=0) trk_idx+=1;
      }
/*   
      trk_idx = 0;
*/
      for(unsigned int i=0; i< JetnPFOP2;i++){
          particle tmp_par;
          TLorentzVector tmp_p4(JetPFOPxP2[i],JetPFOPyP2[i],JetPFOPzP2[i],JetPFOEnP2[i]);
/*
          TLorentzVector p_new = erout4(tmp_p4, p_Jet2.Phi(), p_Jet2.Theta());
*/
          tmp_par.p4 = tmp_p4;
/*
          tmp_par.d0 = JetPFOD0P2[i];
          tmp_par.z0 = JetPFOZ0P2[i];
*/         
          if(JetPFOChargeP2[i]!=0){
/*
             tmp_par.d0 = Jet2TrkD0.at(trk_idx);
             tmp_par.z0 = Jet2TrkZ0.at(trk_idx);
             tmp_par.sigmad0 = Jet2TrkD0SIGMA.at(trk_idx);
             tmp_par.sigmaz0 = Jet2TrkZ0SIGMA.at(trk_idx);      
*/           if(sqrt(JetPFOD0P2[i]*JetPFOD0P2[i]+JetPFOZ0P2[i]*JetPFOZ0P2[i])<2.5 &&  JetPFOProbP2[i]/JetPFONDOFP2[i]>5.0){
                  tmp_par.d0 = JetPFOD0P2[i];
                  tmp_par.z0 = JetPFOZ0P2[i];
                  tmp_par.sigmad0 = JetPFOSIGMAD0P2[i];
                  tmp_par.sigmaz0 = JetPFOSIGMAZ0P2[i];
                  tmp_par.prob    = JetPFOProbP2[i]/JetPFONDOFP2[i];
             }
          }else{
              tmp_par.d0 = 0;
              tmp_par.z0 = 0;
              tmp_par.sigmad0 = 0;
              tmp_par.sigmaz0 = 0;
              tmp_par.prob = 0;
          }
          tmp_par.charge = JetPFOChargeP2[i];         

          p_combined += tmp_p4;

          v_particle.push_back(tmp_par);
//          if(JetPFOChargeP2[i]!=0) trk_idx+=1;
      }
      sort(v_particle.begin(),v_particle.end(),comp);
      // if (Cut(ientry) < 0) continue;
      for(unsigned int i=0; i< v_particle.size();i++){

          TLorentzVector p_new = erout4(v_particle.at(i).p4, p_combined.Phi(), p_combined.Theta());

          Energy[i] = v_particle.at(i).p4.E();
          Mom[i]    = v_particle.at(i).p4.Perp();
          D0[i] = (v_particle.at(i).charge ==0)?0:v_particle.at(i).d0;
          Z0[i] = (v_particle.at(i).charge ==0)?0:v_particle.at(i).z0;
          SIGMAD0[i] = (v_particle.at(i).charge ==0)?0:v_particle.at(i).sigmad0;
          SIGMAZ0[i] = (v_particle.at(i).charge ==0)?0:v_particle.at(i).sigmaz0;
/*
          THETA[i] = v_particle.at(i).p4.Theta();
          PHI[i] = v_particle.at(i).p4.Phi();
*/
          THETA[i] = p_new.Theta();
          PHI[i] = p_new.Phi();
          Charge[i] = v_particle.at(i).charge;
	  Prob[i]   = v_particle.at(i).prob;
      }
      NPar = JetnPFOP1+JetnPFOP2;
      tout->Fill();
   }//tout->Write();
   fout.Write();
   fout.Close();

}
