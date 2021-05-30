#define Mixing_cxx
#include "Mixing.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void Mixing::Loop()
{
	Int_t total = 100000, split =  80000;
	TFile *fout0 = new TFile("qqh_train.root", "RECREATE");
	TTree *outtree0 = fChain[0]->CloneTree(0);
	//
	TBranch * t_lab_cc = outtree0->Branch("lab_CC", &lab_cc, "lab_CC/I");
	TBranch * t_lab_bb = outtree0->Branch("lab_BB", &lab_bb, "lab_BB/I");
	TBranch * t_lab_uu = outtree0->Branch("lab_UU", &lab_uu, "lab_UU/I");
	TBranch * t_lab_tt = outtree0->Branch("lab_TT", &lab_tt, "lab_TT/I");
	TBranch * t_lab_gg = outtree0->Branch("lab_GG", &lab_gg, "lab_GG/I");
	TBranch * t_lab_aa = outtree0->Branch("lab_AA", &lab_aa, "lab_AA/I");
	TBranch * t_lab_ww = outtree0->Branch("lab_WW", &lab_ww, "lab_WW/I");
	TBranch * t_lab_zz = outtree0->Branch("lab_ZZ", &lab_zz, "lab_ZZ/I");
	TBranch * t_lab_az = outtree0->Branch("lab_AZ", &lab_az, "lab_AZ/I");
	//
	for (Long64_t jentry = 0; jentry < split; jentry++)
	{
		for ( int i =0; i<9; i++){
			int lab[9] = {0,0,0, 0,0,0, 0,0,0};
			fChain[i]->GetEntry(jentry);
			lab[i] = 1; 
			lab_cc=lab[0];
			lab_bb=lab[1];
			lab_uu=lab[2];
			lab_tt=lab[3];
			lab_gg=lab[4];
			lab_aa=lab[5];
			lab_zz=lab[6];
			lab_ww=lab[7];
			lab_az=lab[8];
			if( jentry%1000==1)
				printf("%7d, %1d-%1d-%1d-%1d-%1d-%1d-%1d-%1d-%1d\n", jentry, lab_cc, lab_bb, lab_uu, lab_tt, lab_gg, lab_aa, lab_zz, lab_ww, lab_az);
			outtree0->Fill();
		}
		if( jentry%10000==1)
			printf("\n");
	}
	outtree0->Write();
	fout0->Close();

	TFile *fout1 = new TFile("qqh_test.root", "RECREATE");
	TTree *outtree1 = fChain[0]->CloneTree(0);
	//
	TBranch * t_lab_cc1 = outtree1->Branch("lab_CC", &lab_cc, "lab_CC/I");
	TBranch * t_lab_bb1 = outtree1->Branch("lab_BB", &lab_bb, "lab_BB/I");
	TBranch * t_lab_uu1 = outtree1->Branch("lab_UU", &lab_uu, "lab_UU/I");
	TBranch * t_lab_tt1 = outtree1->Branch("lab_TT", &lab_tt, "lab_TT/I");
	TBranch * t_lab_gg1 = outtree1->Branch("lab_GG", &lab_gg, "lab_GG/I");
	TBranch * t_lab_aa1 = outtree1->Branch("lab_AA", &lab_aa, "lab_AA/I");
	TBranch * t_lab_ww1 = outtree1->Branch("lab_WW", &lab_ww, "lab_WW/I");
	TBranch * t_lab_zz1 = outtree1->Branch("lab_ZZ", &lab_zz, "lab_ZZ/I");
	TBranch * t_lab_az1 = outtree1->Branch("lab_AZ", &lab_az, "lab_AZ/I");
	//
	for (Long64_t jentry = split; jentry < total; jentry++)
	{
		for ( int i =0; i<9; i++){
			int lab[9] = {0,0,0, 0,0,0, 0,0,0};
			fChain[i]->GetEntry(jentry);
			lab[i] = 1; 
			lab_cc=lab[0];
			lab_bb=lab[1];
			lab_uu=lab[2];
			lab_tt=lab[3];
			lab_gg=lab[4];
			lab_aa=lab[5];
			lab_zz=lab[6];
			lab_ww=lab[7];
			lab_az=lab[8];
			if( jentry%1000==1)
				printf("%6d, %1d-%1d-%1d-%1d-%1d-%1d-%1d-%1d-%1d\n", jentry, lab_cc, lab_bb, lab_uu, lab_tt, lab_gg, lab_aa, lab_zz, lab_ww, lab_az);
			outtree0->Fill();
		}
		if( jentry%1000==1)
			printf("\n");
	}
	outtree1->Write();
	fout1->Close();
}

int main()
{
	Mixing *t = new Mixing();
	t->Loop();
	delete t;
}
