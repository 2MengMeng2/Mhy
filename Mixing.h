//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Feb 24 14:09:45 2021 by ROOT version 6.20/06
// from TTree CMB/jet information
// found on file: zbb91_cmb.root
//////////////////////////////////////////////////////////

#ifndef Mixing_h
#define Mixing_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class Mixing {
public :
   TChain         *fChain[36];   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           npar;
   Int_t           BCL;
   Double_t        Energy[200];
   Double_t        Mom[200];
   Double_t        logEn[200];
   Double_t        logMo[200];
   Double_t        logEnF[200];
   Double_t        logMoF[200];
   Double_t          delR[200];
   Double_t        THETA[200];
   Double_t        PHI[200];
   Double_t        D0[200];
   Double_t        Z0[200];
   Int_t           PDGID[200];
   Int_t           Charge[200];
   Double_t        CosT[200];
   Double_t        SinT[200];
   Double_t        PhiSinT[200];
   Double_t        Sphericity;
   Double_t        Aplanarity;
   Double_t        C;
   Double_t        D;
   Double_t        Thrust;
   Double_t        Theta;
   Double_t        Phi;
   Double_t        Major;
   Double_t        Minor;
   Double_t        Thetap;
   Double_t        Phip;
   Double_t        ThrEDMp;
   Double_t        FM[50];
   Double_t        FMI[50];
   Double_t        FMS[50];
   Double_t        Ci[28];
   Int_t           lab_ll;
   Int_t           lab_cc;
   Int_t           lab_bb;
   Int_t           lab_uu;
   Int_t           lab_tt;
   Int_t           lab_gg;
   Int_t           lab_aa;
   Int_t           lab_ww;
   Int_t           lab_zz;
   Int_t           lab_az;

   // List of branches
   TBranch        *b_npar;   //!
   TBranch        *b_BCL;   //!
   TBranch        *b_Energy;   //!
   TBranch        *b_Mom;   //!
   TBranch        *b_logMo;   //!
   TBranch        *b_logMoF;   //!
   TBranch        *b_logEn;   //!
   TBranch        *b_logEnF;   //!
   TBranch        *b_delR;   //!
   TBranch        *b_THETA;   //!
   TBranch        *b_PHI;   //!
   TBranch        *b_D0;   //!
   TBranch        *b_Z0;   //!
   TBranch        *b_PDGID;   //!
   TBranch        *b_Charge;   //!

   TBranch        *b_CosT;   //!
   TBranch        *b_SinT;   //!
   TBranch        *b_PhiSinT;   //!
   TBranch        *b_Sphericity;   //!
   TBranch        *b_Aplanarity;   //!
   TBranch        *b_C;   //!
   TBranch        *b_D;   //!
   TBranch        *b_Thrust;   //!
   TBranch        *b_Theta;   //!
   TBranch        *b_Phi;   //!
   TBranch        *b_Major;   //!
   TBranch        *b_Minor;   //!
   TBranch        *b_Thrustp;   //!
   TBranch        *b_Phip;   //!
   TBranch        *b_ThrEDMp;   //!
   TBranch        *b_FM;   //!
   TBranch        *b_FMI;   //!
   TBranch        *b_FMS;   //!
   TBranch        *b_Ci;   //!
   TBranch        *b_lab_ll;   //!
   TBranch        *b_lab_cc;   //!
   TBranch        *b_lab_bb;   //!
   TBranch        *b_lab_uu;   //!
   TBranch        *b_lab_tt;   //!
   TBranch        *b_lab_gg;   //!
   TBranch        *b_lab_aa;   //!
   TBranch        *b_lab_ww;   //!
   TBranch        *b_lab_zz;   //!
   TBranch        *b_lab_az;   //!

   Mixing();
   virtual ~Mixing();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TChain *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Mixing_cxx
Mixing::Mixing() 
{
	char* rootfiles[] = {
		"qqh_cc.root",
		"qqh_bb.root",
		"qqh_e2e2.root",
		"qqh_e3e3.root",
		"qqh_gg.root",
		"qqh_aa.root",
		"qqh_zz.root",
		"qqh_ww.root",
		"qqh_az.root",
	}; 
	for (int i =0; i<9; i++){
		if (fChain[i] == 0) {
			fChain[i] = new TChain("CMB");
			fChain[i]->Add(rootfiles[i]);
			Init(fChain[i]);
		}
	}
}

Mixing::~Mixing()
{
}

Int_t Mixing::GetEntry(Long64_t entry)
{
}
Long64_t Mixing::LoadTree(Long64_t entry)
{
}

void Mixing::Init(TChain *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fCurrent = -1;
   tree->SetMakeClass(1);

   tree->SetBranchAddress("npar", &npar, &b_npar);
   tree->SetBranchAddress("Energy", Energy, &b_Energy);
   tree->SetBranchAddress("Mom", Mom, &b_Mom);
   tree->SetBranchAddress("logMo", logMo, &b_logMo);
   tree->SetBranchAddress("logMoF", logMoF, &b_logMoF);
   tree->SetBranchAddress("logEn", logEn, &b_logEn);
   tree->SetBranchAddress("logEnF", logEnF, &b_logEnF);
   tree->SetBranchAddress("delR", delR, &b_delR);
   tree->SetBranchAddress("THETA", THETA, &b_THETA);
   tree->SetBranchAddress("PHI", PHI, &b_PHI);
   tree->SetBranchAddress("D0", D0, &b_D0);
   tree->SetBranchAddress("Z0", Z0, &b_Z0);
   tree->SetBranchAddress("PDGID", PDGID, &b_PDGID);
   tree->SetBranchAddress("Charge", Charge, &b_Charge);
   tree->SetBranchAddress("CosT", CosT, &b_CosT);
   tree->SetBranchAddress("SinT", SinT, &b_SinT);
   tree->SetBranchAddress("PhiSinT", PhiSinT, &b_PhiSinT);

   Notify();
}

Bool_t Mixing::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Mixing::Show(Long64_t entry)
{
}
Int_t Mixing::Cut(Long64_t entry)
{
   return 1;
}
#endif // #ifdef Mixing_cxx
