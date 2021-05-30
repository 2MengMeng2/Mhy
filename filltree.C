#include "ntEXC2_0001100.h"
#include "TTree.h"
#include "TChain.h"
#include "TFile.h"
#include <string>
/*
#include <Python.h>
*/
#include <iostream>
#include<stdlib.h>
#define NGRAPH 195
int main(int argc, char *argv[]){
    if(argc !=6){std::cout<<"Error. Usage: ./mygraph inputfilename outputfilename outputtreename njobs job_idx"<<std::endl; return -1;}

    std::string s_outputfilename(argv[2]);
    std::string s_outputfilename_sub = s_outputfilename.substr(0,s_outputfilename.length()-5);
    s_outputfilename_sub.append("_"); s_outputfilename_sub.append(argv[5]);
    s_outputfilename_sub.append(".root");
 
    TFile fout(s_outputfilename_sub.c_str(), "recreate");
    TTree *tout = new TTree(argv[3],"EFP Values");

    float efpvalue[NGRAPH];
    float weight = 1.0;
    float JetBTagP1=0; float JetBTagP2=0; float BBLikeness;
    float JetCTagP1=0; float JetCTagP2=0; float CCLikeness;
    tout->Branch("efpvalue",efpvalue,"efpvalue[195]/F");
    tout->Branch("weight",&weight,"weight/F"); 
    tout->Branch("JetBTagP1",&JetBTagP1,"JetBTagP1/F");
    tout->Branch("JetBTagP2",&JetBTagP2,"JetBTagP2/F");
    tout->Branch("BBLikeness",&BBLikeness,"BBLikeness/F");
    tout->Branch("JetCTagP1",&JetCTagP1,"JetCTagP1/F");
    tout->Branch("JetCTagP2",&JetCTagP2,"JetCTagP2/F");
    tout->Branch("CCLikeness",&CCLikeness,"CCLikeness/F");
/*
    Py_Initialize();

    PyRun_SimpleString("import sys; import os; sys.path.append(os.getcwd())");
*/
/*
    TFile finput(argv[1],"read");
*/
    int njobs = atoi(argv[4]);
    int job_idx = atoi(argv[5]);
    TChain *s1 = new TChain("ntEXC2_0001100");
    s1->Add(argv[1]);
    ntEXC2_0001100 inputtree(s1);
    inputtree.Loop(tout,efpvalue,njobs,job_idx, JetBTagP1, JetBTagP2, BBLikeness, JetCTagP1, JetCTagP2, CCLikeness);
    
    tout->Write();
    fout.Close();
/*
    Py_Finalize();
*/
    return 0;
}


