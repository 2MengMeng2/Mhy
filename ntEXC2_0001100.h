//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Dec 17 17:03:02 2020 by ROOT version 6.14/06
// from TTree ntEXC2_0001100/
// found on file: /cefs/baiy/Hbbccgg/Analysis/Analysis_v11/Higgs/mumuH.root
//////////////////////////////////////////////////////////

#ifndef ntEXC2_0001100_h
#define ntEXC2_0001100_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class ntEXC2_0001100 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        Run;
   Double_t        Event;
   Double_t        Weight;
   Double_t        ntrks;
   Double_t        nclus;
   Double_t        nPFOs;
   Double_t        ntrks_Pandora;
   Double_t        nclus_Pandora;
   Double_t        nPFOs_Pandora;
   Double_t        Pmax;
   Double_t        Emax;
   Double_t        njets;
   Double_t        ntaus;
   Double_t        nElec;
   Double_t        nMuon;
   Double_t        nGamma;
   Double_t        VisEn;
   Double_t        VisPx;
   Double_t        VisPy;
   Double_t        VisPz;
   Double_t        VisMass;
   Double_t        y12;
   Double_t        y23;
   Double_t        y34;
   Double_t        y45;
   Double_t        y56;
   Double_t        y67;
   Int_t           indexmc;
   Double_t        trkidx[300];
   Double_t        pdgid[300];
   Double_t        mc_Px[300];
   Double_t        mc_Py[300];
   Double_t        mc_Pz[300];
   Double_t        mc_En[300];
   Double_t        nparents[300];
   Double_t        primaryparent[300];
   Int_t           idx_trk;
   Double_t        trkD0[300];
   Double_t        trkZ0[300];
   Int_t           idx_pfo;
   Double_t        Pfo_En[300];
   Double_t        Pfo_Pp[300];
   Double_t        Pfo_Px[300];
   Double_t        Pfo_Py[300];
   Double_t        Pfo_Pz[300];
   Double_t        Pfo_Cos[300];
   Double_t        Pfo_Charge[300];
   Double_t        nhfs;
   Double_t        VisEnMC;
   Double_t        MisEnMC;
   Double_t        MissingMass2;
   Double_t        TotalP;
   Double_t        Chi2;
   Double_t        prob;
   Double_t        nitr;
   Double_t        Chi2DOF;
   Int_t           idx_jetpfo;
   Double_t        JetPFOEnP1[300];
   Double_t        JetPFOPxP1[300];
   Double_t        JetPFOPyP1[300];
   Double_t        JetPFOPzP1[300];
   Double_t        JetPFOChargeP1[300];
   Double_t        JetPFOD0P1[300];
   Double_t        JetPFOZ0P1[300];
   Double_t        JetPFOSIGMAD0P1[300];
   Double_t        JetPFOSIGMAZ0P1[300];
   Double_t        JetVtxRP1;
   Double_t        JetVtxZP1;
   Double_t        JetVtxSigRP1;
   Double_t        JetVtxSigZP1;
   Double_t        JetBtagP1;
   Double_t        JetCtagP1;
   Double_t        JetBCtagP1;
   Double_t        JetCatP1;
   Double_t        JetntrkP1;
   Double_t        JetncluP1;
   Double_t        JetchargeP1;
   Double_t        JetnPFOP1;
   Double_t        JetmassP1;
   Double_t        JetEnP1;
   Double_t        JetPxP1;
   Double_t        JetPyP1;
   Double_t        JetPzP1;
   Double_t        JetPtP1;
   Double_t        JetPtotP1;
   Double_t        JetRapidityP1;
   Double_t        JetcosThetaP1;
   Double_t        JetPDGIDP1;
   Double_t        JetMcPxP1;
   Double_t        JetMcPyP1;
   Double_t        JetMcPzP1;
   Double_t        JetMcEnP1;
   Double_t        JetAngleRecMcP1;
   Double_t        JetPFOEnP2[300];
   Double_t        JetPFOPxP2[300];
   Double_t        JetPFOPyP2[300];
   Double_t        JetPFOPzP2[300];
   Double_t        JetPFOChargeP2[300];
   Double_t        JetPFOD0P2[300];
   Double_t        JetPFOZ0P2[300];
   Double_t        JetPFOSIGMAD0P2[300];
   Double_t        JetPFOSIGMAZ0P2[300];
   Double_t        JetVtxRP2;
   Double_t        JetVtxZP2;
   Double_t        JetVtxSigRP2;
   Double_t        JetVtxSigZP2;
   Double_t        JetBtagP2;
   Double_t        JetCtagP2;
   Double_t        JetBCtagP2;
   Double_t        JetCatP2;
   Double_t        JetntrkP2;
   Double_t        JetncluP2;
   Double_t        JetchargeP2;
   Double_t        JetnPFOP2;
   Double_t        JetmassP2;
   Double_t        JetEnP2;
   Double_t        JetPxP2;
   Double_t        JetPyP2;
   Double_t        JetPzP2;
   Double_t        JetPtP2;
   Double_t        JetPtotP2;
   Double_t        JetRapidityP2;
   Double_t        JetcosThetaP2;
   Double_t        JetPDGIDP2;
   Double_t        JetMcPxP2;
   Double_t        JetMcPyP2;
   Double_t        JetMcPzP2;
   Double_t        JetMcEnP2;
   Double_t        JetAngleRecMcP2;
   Double_t        PfontrkP3;
   Double_t        PfoncluP3;
   Double_t        PfoVtxRP3;
   Double_t        PfoVtxZP3;
   Double_t        PfoecalP3;
   Double_t        PfohcalP3;
   Double_t        PfonHitsP3;
   Double_t        PfototCalEnP3;
   Double_t        PfochargeP3;
   Double_t        PfomassP3;
   Double_t        PfoEnP3;
   Double_t        PfoPxP3;
   Double_t        PfoPyP3;
   Double_t        PfoPzP3;
   Double_t        PfoPtP3;
   Double_t        PfoPtotP3;
   Double_t        PfoLepTypeP3;
   Double_t        PfoRapidityP3;
   Double_t        PfocosThetaP3;
   Double_t        PfoPDGIDP3;
   Double_t        PfoMCTENP3;
   Double_t        PfoMCTPXP3;
   Double_t        PfoMCTPYP3;
   Double_t        PfoMCTPZP3;
   Double_t        PfontrkP4;
   Double_t        PfoncluP4;
   Double_t        PfoVtxRP4;
   Double_t        PfoVtxZP4;
   Double_t        PfoecalP4;
   Double_t        PfohcalP4;
   Double_t        PfonHitsP4;
   Double_t        PfototCalEnP4;
   Double_t        PfochargeP4;
   Double_t        PfomassP4;
   Double_t        PfoEnP4;
   Double_t        PfoPxP4;
   Double_t        PfoPyP4;
   Double_t        PfoPzP4;
   Double_t        PfoPtP4;
   Double_t        PfoPtotP4;
   Double_t        PfoLepTypeP4;
   Double_t        PfoRapidityP4;
   Double_t        PfocosThetaP4;
   Double_t        PfoPDGIDP4;
   Double_t        PfoMCTENP4;
   Double_t        PfoMCTPXP4;
   Double_t        PfoMCTPYP4;
   Double_t        PfoMCTPZP4;
   Int_t           idx_raw;
   Double_t        raw_Px[300];
   Double_t        raw_Py[300];
   Double_t        raw_Pz[300];
   Double_t        raw_En[300];
   Double_t        RMassAllPhotons;
   Int_t           elec_idx;
   Double_t        ExElec_Px[300];
   Double_t        ExElec_Py[300];
   Double_t        ExElec_Pz[300];
   Double_t        ExElec_En[300];
   Double_t        ExElec_charge[300];
   Double_t        ExElec_d0sig[300];
   Double_t        ExElec_z0sig[300];
   Int_t           muon_idx;
   Double_t        ExMuon_Px[300];
   Double_t        ExMuon_Py[300];
   Double_t        ExMuon_Pz[300];
   Double_t        ExMuon_En[300];
   Double_t        ExMuon_charge[300];
   Double_t        ExMuon_d0sig[300];
   Double_t        ExMuon_z0sig[300];
   Int_t           gamma_idx;
   Double_t        ExGamma_Px[300];
   Double_t        ExGamma_Py[300];
   Double_t        ExGamma_Pz[300];
   Double_t        ExGamma_En[300];
   Int_t           idx_kmf;
   Double_t        kmf_Px[300];
   Double_t        kmf_Py[300];
   Double_t        kmf_Pz[300];
   Double_t        kmf_En[300];
   Double_t        RMass12;
   Double_t        KMass12;
   Double_t        Rreco12;
   Double_t        Kreco12;
   Double_t        RMass13;
   Double_t        KMass13;
   Double_t        Rreco13;
   Double_t        Kreco13;
   Double_t        RMass14;
   Double_t        KMass14;
   Double_t        Rreco14;
   Double_t        Kreco14;
   Double_t        RMass23;
   Double_t        KMass23;
   Double_t        Rreco23;
   Double_t        Kreco23;
   Double_t        RMass24;
   Double_t        KMass24;
   Double_t        Rreco24;
   Double_t        Kreco24;
   Double_t        RMass34;
   Double_t        KMass34;
   Double_t        Rreco34;
   Double_t        Kreco34;
   Double_t        RMass123;
   Double_t        KMass123;
   Double_t        Rreco123;
   Double_t        Kreco123;
   Double_t        RMass124;
   Double_t        KMass124;
   Double_t        Rreco124;
   Double_t        Kreco124;
   Double_t        RMass134;
   Double_t        KMass134;
   Double_t        Rreco134;
   Double_t        Kreco134;
   Double_t        RMass234;
   Double_t        KMass234;
   Double_t        Rreco234;
   Double_t        Kreco234;
   Double_t        RMass1234;
   Double_t        KMass1234;
   Double_t        Rreco1234;
   Double_t        Kreco1234;

   // List of branches
   TBranch        *b_Run;   //!
   TBranch        *b_Event;   //!
   TBranch        *b_Weight;   //!
   TBranch        *b_ntrks;   //!
   TBranch        *b_nclus;   //!
   TBranch        *b_nPFOs;   //!
   TBranch        *b_ntrks_Pandora;   //!
   TBranch        *b_nclus_Pandora;   //!
   TBranch        *b_nPFOs_Pandora;   //!
   TBranch        *b_Pmax;   //!
   TBranch        *b_Emax;   //!
   TBranch        *b_njets;   //!
   TBranch        *b_ntaus;   //!
   TBranch        *b_nElec;   //!
   TBranch        *b_nMuon;   //!
   TBranch        *b_nGamma;   //!
   TBranch        *b_VisEn;   //!
   TBranch        *b_VisPx;   //!
   TBranch        *b_VisPy;   //!
   TBranch        *b_VisPz;   //!
   TBranch        *b_VisMass;   //!
   TBranch        *b_y12;   //!
   TBranch        *b_y23;   //!
   TBranch        *b_y34;   //!
   TBranch        *b_y45;   //!
   TBranch        *b_y56;   //!
   TBranch        *b_y67;   //!
   TBranch        *b_indexmc;   //!
   TBranch        *b_trkidx;   //!
   TBranch        *b_pdgid;   //!
   TBranch        *b_mc_Px;   //!
   TBranch        *b_mc_Py;   //!
   TBranch        *b_mc_Pz;   //!
   TBranch        *b_mc_En;   //!
   TBranch        *b_nparents;   //!
   TBranch        *b_primaryparent;   //!
   TBranch        *b_idx_trk;   //!
   TBranch        *b_trkD0;   //!
   TBranch        *b_trkZ0;   //!
   TBranch        *b_idx_pfo;   //!
   TBranch        *b_Pfo_En;   //!
   TBranch        *b_Pfo_Pp;   //!
   TBranch        *b_Pfo_Px;   //!
   TBranch        *b_Pfo_Py;   //!
   TBranch        *b_Pfo_Pz;   //!
   TBranch        *b_Pfo_Cos;   //!
   TBranch        *b_Pfo_Charge;   //!
   TBranch        *b_nhfs;   //!
   TBranch        *b_VisEnMC;   //!
   TBranch        *b_MisEnMC;   //!
   TBranch        *b_MissingMass2;   //!
   TBranch        *b_TotalP;   //!
   TBranch        *b_Chi2;   //!
   TBranch        *b_prob;   //!
   TBranch        *b_nitr;   //!
   TBranch        *b_Chi2DOF;   //!
   TBranch        *b_idx_jetpfo;   //!
   TBranch        *b_JetPFOEnP1;   //!
   TBranch        *b_JetPFOPxP1;   //!
   TBranch        *b_JetPFOPyP1;   //!
   TBranch        *b_JetPFOPzP1;   //!
   TBranch        *b_JetPFOChargeP1;   //!
   TBranch        *b_JetPFOD0P1;   //!
   TBranch        *b_JetPFOZ0P1;   //!
   TBranch        *b_JetPFOSIGMAD0P1;   //!
   TBranch        *b_JetPFOSIGMAZ0P1;   //!
   TBranch        *b_JetVtxRP1;   //!
   TBranch        *b_JetVtxZP1;   //!
   TBranch        *b_JetVtxSigRP1;   //!
   TBranch        *b_JetVtxSigZP1;   //!
   TBranch        *b_JetBtagP1;   //!
   TBranch        *b_JetCtagP1;   //!
   TBranch        *b_JetBCtagP1;   //!
   TBranch        *b_JetCatP1;   //!
   TBranch        *b_JetntrkP1;   //!
   TBranch        *b_JetncluP1;   //!
   TBranch        *b_JetchargeP1;   //!
   TBranch        *b_JetnPFOP1;   //!
   TBranch        *b_JetmassP1;   //!
   TBranch        *b_JetEnP1;   //!
   TBranch        *b_JetPxP1;   //!
   TBranch        *b_JetPyP1;   //!
   TBranch        *b_JetPzP1;   //!
   TBranch        *b_JetPtP1;   //!
   TBranch        *b_JetPtotP1;   //!
   TBranch        *b_JetRapidityP1;   //!
   TBranch        *b_JetcosThetaP1;   //!
   TBranch        *b_JetPDGIDP1;   //!
   TBranch        *b_JetMcPxP1;   //!
   TBranch        *b_JetMcPyP1;   //!
   TBranch        *b_JetMcPzP1;   //!
   TBranch        *b_JetMcEnP1;   //!
   TBranch        *b_JetAngleRecMcP1;   //!
   TBranch        *b_JetPFOEnP2;   //!
   TBranch        *b_JetPFOPxP2;   //!
   TBranch        *b_JetPFOPyP2;   //!
   TBranch        *b_JetPFOPzP2;   //!
   TBranch        *b_JetPFOChargeP2;   //!
   TBranch        *b_JetPFOD0P2;   //!
   TBranch        *b_JetPFOZ0P2;   //!
   TBranch        *b_JetPFOSIGMAD0P2;   //!
   TBranch        *b_JetPFOSIGMAZ0P2;   //!
   TBranch        *b_JetVtxRP2;   //!
   TBranch        *b_JetVtxZP2;   //!
   TBranch        *b_JetVtxSigRP2;   //!
   TBranch        *b_JetVtxSigZP2;   //!
   TBranch        *b_JetBtagP2;   //!
   TBranch        *b_JetCtagP2;   //!
   TBranch        *b_JetBCtagP2;   //!
   TBranch        *b_JetCatP2;   //!
   TBranch        *b_JetntrkP2;   //!
   TBranch        *b_JetncluP2;   //!
   TBranch        *b_JetchargeP2;   //!
   TBranch        *b_JetnPFOP2;   //!
   TBranch        *b_JetmassP2;   //!
   TBranch        *b_JetEnP2;   //!
   TBranch        *b_JetPxP2;   //!
   TBranch        *b_JetPyP2;   //!
   TBranch        *b_JetPzP2;   //!
   TBranch        *b_JetPtP2;   //!
   TBranch        *b_JetPtotP2;   //!
   TBranch        *b_JetRapidityP2;   //!
   TBranch        *b_JetcosThetaP2;   //!
   TBranch        *b_JetPDGIDP2;   //!
   TBranch        *b_JetMcPxP2;   //!
   TBranch        *b_JetMcPyP2;   //!
   TBranch        *b_JetMcPzP2;   //!
   TBranch        *b_JetMcEnP2;   //!
   TBranch        *b_JetAngleRecMcP2;   //!
   TBranch        *b_PfontrkP3;   //!
   TBranch        *b_PfoncluP3;   //!
   TBranch        *b_PfoVtxRP3;   //!
   TBranch        *b_PfoVtxZP3;   //!
   TBranch        *b_PfoecalP3;   //!
   TBranch        *b_PfohcalP3;   //!
   TBranch        *b_PfonHitsP3;   //!
   TBranch        *b_PfototCalEnP3;   //!
   TBranch        *b_PfochargeP3;   //!
   TBranch        *b_PfomassP3;   //!
   TBranch        *b_PfoEnP3;   //!
   TBranch        *b_PfoPxP3;   //!
   TBranch        *b_PfoPyP3;   //!
   TBranch        *b_PfoPzP3;   //!
   TBranch        *b_PfoPtP3;   //!
   TBranch        *b_PfoPtotP3;   //!
   TBranch        *b_PfoLepTypeP3;   //!
   TBranch        *b_PfoRapidityP3;   //!
   TBranch        *b_PfocosThetaP3;   //!
   TBranch        *b_PfoPDGIDP3;   //!
   TBranch        *b_PfoMCTENP3;   //!
   TBranch        *b_PfoMCTPXP3;   //!
   TBranch        *b_PfoMCTPYP3;   //!
   TBranch        *b_PfoMCTPZP3;   //!
   TBranch        *b_PfontrkP4;   //!
   TBranch        *b_PfoncluP4;   //!
   TBranch        *b_PfoVtxRP4;   //!
   TBranch        *b_PfoVtxZP4;   //!
   TBranch        *b_PfoecalP4;   //!
   TBranch        *b_PfohcalP4;   //!
   TBranch        *b_PfonHitsP4;   //!
   TBranch        *b_PfototCalEnP4;   //!
   TBranch        *b_PfochargeP4;   //!
   TBranch        *b_PfomassP4;   //!
   TBranch        *b_PfoEnP4;   //!
   TBranch        *b_PfoPxP4;   //!
   TBranch        *b_PfoPyP4;   //!
   TBranch        *b_PfoPzP4;   //!
   TBranch        *b_PfoPtP4;   //!
   TBranch        *b_PfoPtotP4;   //!
   TBranch        *b_PfoLepTypeP4;   //!
   TBranch        *b_PfoRapidityP4;   //!
   TBranch        *b_PfocosThetaP4;   //!
   TBranch        *b_PfoPDGIDP4;   //!
   TBranch        *b_PfoMCTENP4;   //!
   TBranch        *b_PfoMCTPXP4;   //!
   TBranch        *b_PfoMCTPYP4;   //!
   TBranch        *b_PfoMCTPZP4;   //!
   TBranch        *b_idx_raw;   //!
   TBranch        *b_raw_Px;   //!
   TBranch        *b_raw_Py;   //!
   TBranch        *b_raw_Pz;   //!
   TBranch        *b_raw_En;   //!
   TBranch        *b_RMassAllPhotons;   //!
   TBranch        *b_elec_idx;   //!
   TBranch        *b_ExElec_Px;   //!
   TBranch        *b_ExElec_Py;   //!
   TBranch        *b_ExElec_Pz;   //!
   TBranch        *b_ExElec_En;   //!
   TBranch        *b_ExElec_charge;   //!
   TBranch        *b_ExElec_d0sig;   //!
   TBranch        *b_ExElec_z0sig;   //!
   TBranch        *b_muon_idx;   //!
   TBranch        *b_ExMuon_Px;   //!
   TBranch        *b_ExMuon_Py;   //!
   TBranch        *b_ExMuon_Pz;   //!
   TBranch        *b_ExMuon_En;   //!
   TBranch        *b_ExMuon_charge;   //!
   TBranch        *b_ExMuon_d0sig;   //!
   TBranch        *b_ExMuon_z0sig;   //!
   TBranch        *b_gamma_idx;   //!
   TBranch        *b_ExGamma_Px;   //!
   TBranch        *b_ExGamma_Py;   //!
   TBranch        *b_ExGamma_Pz;   //!
   TBranch        *b_ExGamma_En;   //!
   TBranch        *b_idx_kmf;   //!
   TBranch        *b_kmf_Px;   //!
   TBranch        *b_kmf_Py;   //!
   TBranch        *b_kmf_Pz;   //!
   TBranch        *b_kmf_En;   //!
   TBranch        *b_RMass12;   //!
   TBranch        *b_KMass12;   //!
   TBranch        *b_Rreco12;   //!
   TBranch        *b_Kreco12;   //!
   TBranch        *b_RMass13;   //!
   TBranch        *b_KMass13;   //!
   TBranch        *b_Rreco13;   //!
   TBranch        *b_Kreco13;   //!
   TBranch        *b_RMass14;   //!
   TBranch        *b_KMass14;   //!
   TBranch        *b_Rreco14;   //!
   TBranch        *b_Kreco14;   //!
   TBranch        *b_RMass23;   //!
   TBranch        *b_KMass23;   //!
   TBranch        *b_Rreco23;   //!
   TBranch        *b_Kreco23;   //!
   TBranch        *b_RMass24;   //!
   TBranch        *b_KMass24;   //!
   TBranch        *b_Rreco24;   //!
   TBranch        *b_Kreco24;   //!
   TBranch        *b_RMass34;   //!
   TBranch        *b_KMass34;   //!
   TBranch        *b_Rreco34;   //!
   TBranch        *b_Kreco34;   //!
   TBranch        *b_RMass123;   //!
   TBranch        *b_KMass123;   //!
   TBranch        *b_Rreco123;   //!
   TBranch        *b_Kreco123;   //!
   TBranch        *b_RMass124;   //!
   TBranch        *b_KMass124;   //!
   TBranch        *b_Rreco124;   //!
   TBranch        *b_Kreco124;   //!
   TBranch        *b_RMass134;   //!
   TBranch        *b_KMass134;   //!
   TBranch        *b_Rreco134;   //!
   TBranch        *b_Kreco134;   //!
   TBranch        *b_RMass234;   //!
   TBranch        *b_KMass234;   //!
   TBranch        *b_Rreco234;   //!
   TBranch        *b_Kreco234;   //!
   TBranch        *b_RMass1234;   //!
   TBranch        *b_KMass1234;   //!
   TBranch        *b_Rreco1234;   //!
   TBranch        *b_Kreco1234;   //!

   ntEXC2_0001100(TTree *tree=0);
   virtual ~ntEXC2_0001100();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TTree*, float *, int njobs, int job_idx, float & btag1, float & btag2, float & bblikeness, float & ctag1, float & ctag2, float & cclikeness);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef ntEXC2_0001100_cxx
ntEXC2_0001100::ntEXC2_0001100(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/cefs/baiy/Hbbccgg/Analysis/Analysis_v11/Higgs/mumuH.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/cefs/baiy/Hbbccgg/Analysis/Analysis_v11/Higgs/mumuH.root");
      }
      f->GetObject("ntEXC2_0001100",tree);

   }
   Init(tree);
}

ntEXC2_0001100::~ntEXC2_0001100()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ntEXC2_0001100::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ntEXC2_0001100::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void ntEXC2_0001100::Init(TTree *tree)
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
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Run", &Run, &b_Run);
   fChain->SetBranchAddress("Event", &Event, &b_Event);
   fChain->SetBranchAddress("Weight", &Weight, &b_Weight);
   fChain->SetBranchAddress("ntrks", &ntrks, &b_ntrks);
   fChain->SetBranchAddress("nclus", &nclus, &b_nclus);
   fChain->SetBranchAddress("nPFOs", &nPFOs, &b_nPFOs);
   fChain->SetBranchAddress("ntrks_Pandora", &ntrks_Pandora, &b_ntrks_Pandora);
   fChain->SetBranchAddress("nclus_Pandora", &nclus_Pandora, &b_nclus_Pandora);
   fChain->SetBranchAddress("nPFOs_Pandora", &nPFOs_Pandora, &b_nPFOs_Pandora);
   fChain->SetBranchAddress("Pmax", &Pmax, &b_Pmax);
   fChain->SetBranchAddress("Emax", &Emax, &b_Emax);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("ntaus", &ntaus, &b_ntaus);
   fChain->SetBranchAddress("nElec", &nElec, &b_nElec);
   fChain->SetBranchAddress("nMuon", &nMuon, &b_nMuon);
   fChain->SetBranchAddress("nGamma", &nGamma, &b_nGamma);
   fChain->SetBranchAddress("VisEn", &VisEn, &b_VisEn);
   fChain->SetBranchAddress("VisPx", &VisPx, &b_VisPx);
   fChain->SetBranchAddress("VisPy", &VisPy, &b_VisPy);
   fChain->SetBranchAddress("VisPz", &VisPz, &b_VisPz);
   fChain->SetBranchAddress("VisMass", &VisMass, &b_VisMass);
   fChain->SetBranchAddress("y12", &y12, &b_y12);
   fChain->SetBranchAddress("y23", &y23, &b_y23);
   fChain->SetBranchAddress("y34", &y34, &b_y34);
   fChain->SetBranchAddress("y45", &y45, &b_y45);
   fChain->SetBranchAddress("y56", &y56, &b_y56);
   fChain->SetBranchAddress("y67", &y67, &b_y67);
   fChain->SetBranchAddress("indexmc", &indexmc, &b_indexmc);
   fChain->SetBranchAddress("trkidx[300]", trkidx, &b_trkidx);
   fChain->SetBranchAddress("pdgid[300]", pdgid, &b_pdgid);
   fChain->SetBranchAddress("mc_Px[300]", mc_Px, &b_mc_Px);
   fChain->SetBranchAddress("mc_Py[300]", mc_Py, &b_mc_Py);
   fChain->SetBranchAddress("mc_Pz[300]", mc_Pz, &b_mc_Pz);
   fChain->SetBranchAddress("mc_En[300]", mc_En, &b_mc_En);
   fChain->SetBranchAddress("nparents[300]", nparents, &b_nparents);
   fChain->SetBranchAddress("primaryparent[300]", primaryparent, &b_primaryparent);
   fChain->SetBranchAddress("idx_trk", &idx_trk, &b_idx_trk);
   fChain->SetBranchAddress("trkD0[300]", trkD0, &b_trkD0);
   fChain->SetBranchAddress("trkZ0[300]", trkZ0, &b_trkZ0);
   fChain->SetBranchAddress("idx_pfo", &idx_pfo, &b_idx_pfo);
   fChain->SetBranchAddress("Pfo_En[300]", Pfo_En, &b_Pfo_En);
   fChain->SetBranchAddress("Pfo_Pp[300]", Pfo_Pp, &b_Pfo_Pp);
   fChain->SetBranchAddress("Pfo_Px[300]", Pfo_Px, &b_Pfo_Px);
   fChain->SetBranchAddress("Pfo_Py[300]", Pfo_Py, &b_Pfo_Py);
   fChain->SetBranchAddress("Pfo_Pz[300]", Pfo_Pz, &b_Pfo_Pz);
   fChain->SetBranchAddress("Pfo_Cos[300]", Pfo_Cos, &b_Pfo_Cos);
   fChain->SetBranchAddress("Pfo_Charge[300]", Pfo_Charge, &b_Pfo_Charge);
   fChain->SetBranchAddress("nhfs", &nhfs, &b_nhfs);
   fChain->SetBranchAddress("VisEnMC", &VisEnMC, &b_VisEnMC);
   fChain->SetBranchAddress("MisEnMC", &MisEnMC, &b_MisEnMC);
   fChain->SetBranchAddress("MissingMass2", &MissingMass2, &b_MissingMass2);
   fChain->SetBranchAddress("TotalP", &TotalP, &b_TotalP);
   fChain->SetBranchAddress("Chi2", &Chi2, &b_Chi2);
   fChain->SetBranchAddress("prob", &prob, &b_prob);
   fChain->SetBranchAddress("nitr", &nitr, &b_nitr);
   fChain->SetBranchAddress("Chi2DOF", &Chi2DOF, &b_Chi2DOF);
   fChain->SetBranchAddress("idx_jetpfo", &idx_jetpfo, &b_idx_jetpfo);
   fChain->SetBranchAddress("JetPFOEnP1[300]", JetPFOEnP1, &b_JetPFOEnP1);
   fChain->SetBranchAddress("JetPFOPxP1[300]", JetPFOPxP1, &b_JetPFOPxP1);
   fChain->SetBranchAddress("JetPFOPyP1[300]", JetPFOPyP1, &b_JetPFOPyP1);
   fChain->SetBranchAddress("JetPFOPzP1[300]", JetPFOPzP1, &b_JetPFOPzP1);
   fChain->SetBranchAddress("JetPFOChargeP1[300]", JetPFOChargeP1, &b_JetPFOChargeP1);
   fChain->SetBranchAddress("JetPFOD0P1[300]", JetPFOD0P1, &b_JetPFOD0P1);
   fChain->SetBranchAddress("JetPFOZ0P1[300]", JetPFOZ0P1, &b_JetPFOZ0P1);
   fChain->SetBranchAddress("JetPFOSIGMAD0P1[300]", JetPFOSIGMAD0P1, &b_JetPFOSIGMAD0P1);
   fChain->SetBranchAddress("JetPFOSIGMAZ0P1[300]", JetPFOSIGMAZ0P1, &b_JetPFOSIGMAZ0P1);
   fChain->SetBranchAddress("JetVtxRP1", &JetVtxRP1, &b_JetVtxRP1);
   fChain->SetBranchAddress("JetVtxZP1", &JetVtxZP1, &b_JetVtxZP1);
   fChain->SetBranchAddress("JetVtxSigRP1", &JetVtxSigRP1, &b_JetVtxSigRP1);
   fChain->SetBranchAddress("JetVtxSigZP1", &JetVtxSigZP1, &b_JetVtxSigZP1);
   fChain->SetBranchAddress("JetBtagP1", &JetBtagP1, &b_JetBtagP1);
   fChain->SetBranchAddress("JetCtagP1", &JetCtagP1, &b_JetCtagP1);
   fChain->SetBranchAddress("JetBCtagP1", &JetBCtagP1, &b_JetBCtagP1);
   fChain->SetBranchAddress("JetCatP1", &JetCatP1, &b_JetCatP1);
   fChain->SetBranchAddress("JetntrkP1", &JetntrkP1, &b_JetntrkP1);
   fChain->SetBranchAddress("JetncluP1", &JetncluP1, &b_JetncluP1);
   fChain->SetBranchAddress("JetchargeP1", &JetchargeP1, &b_JetchargeP1);
   fChain->SetBranchAddress("JetnPFOP1", &JetnPFOP1, &b_JetnPFOP1);
   fChain->SetBranchAddress("JetmassP1", &JetmassP1, &b_JetmassP1);
   fChain->SetBranchAddress("JetEnP1", &JetEnP1, &b_JetEnP1);
   fChain->SetBranchAddress("JetPxP1", &JetPxP1, &b_JetPxP1);
   fChain->SetBranchAddress("JetPyP1", &JetPyP1, &b_JetPyP1);
   fChain->SetBranchAddress("JetPzP1", &JetPzP1, &b_JetPzP1);
   fChain->SetBranchAddress("JetPtP1", &JetPtP1, &b_JetPtP1);
   fChain->SetBranchAddress("JetPtotP1", &JetPtotP1, &b_JetPtotP1);
   fChain->SetBranchAddress("JetRapidityP1", &JetRapidityP1, &b_JetRapidityP1);
   fChain->SetBranchAddress("JetcosThetaP1", &JetcosThetaP1, &b_JetcosThetaP1);
   fChain->SetBranchAddress("JetPDGIDP1", &JetPDGIDP1, &b_JetPDGIDP1);
   fChain->SetBranchAddress("JetMcPxP1", &JetMcPxP1, &b_JetMcPxP1);
   fChain->SetBranchAddress("JetMcPyP1", &JetMcPyP1, &b_JetMcPyP1);
   fChain->SetBranchAddress("JetMcPzP1", &JetMcPzP1, &b_JetMcPzP1);
   fChain->SetBranchAddress("JetMcEnP1", &JetMcEnP1, &b_JetMcEnP1);
   fChain->SetBranchAddress("JetAngleRecMcP1", &JetAngleRecMcP1, &b_JetAngleRecMcP1);
   fChain->SetBranchAddress("JetPFOEnP2[300]", JetPFOEnP2, &b_JetPFOEnP2);
   fChain->SetBranchAddress("JetPFOPxP2[300]", JetPFOPxP2, &b_JetPFOPxP2);
   fChain->SetBranchAddress("JetPFOPyP2[300]", JetPFOPyP2, &b_JetPFOPyP2);
   fChain->SetBranchAddress("JetPFOPzP2[300]", JetPFOPzP2, &b_JetPFOPzP2);
   fChain->SetBranchAddress("JetPFOChargeP2[300]", JetPFOChargeP2, &b_JetPFOChargeP2);
   fChain->SetBranchAddress("JetPFOD0P2[300]", JetPFOD0P2, &b_JetPFOD0P2);
   fChain->SetBranchAddress("JetPFOZ0P2[300]", JetPFOZ0P2, &b_JetPFOZ0P2);
   fChain->SetBranchAddress("JetPFOSIGMAD0P2[300]", JetPFOSIGMAD0P2, &b_JetPFOSIGMAD0P2);
   fChain->SetBranchAddress("JetPFOSIGMAZ0P2[300]", JetPFOSIGMAZ0P2, &b_JetPFOSIGMAZ0P2);
   fChain->SetBranchAddress("JetVtxRP2", &JetVtxRP2, &b_JetVtxRP2);
   fChain->SetBranchAddress("JetVtxZP2", &JetVtxZP2, &b_JetVtxZP2);
   fChain->SetBranchAddress("JetVtxSigRP2", &JetVtxSigRP2, &b_JetVtxSigRP2);
   fChain->SetBranchAddress("JetVtxSigZP2", &JetVtxSigZP2, &b_JetVtxSigZP2);
   fChain->SetBranchAddress("JetBtagP2", &JetBtagP2, &b_JetBtagP2);
   fChain->SetBranchAddress("JetCtagP2", &JetCtagP2, &b_JetCtagP2);
   fChain->SetBranchAddress("JetBCtagP2", &JetBCtagP2, &b_JetBCtagP2);
   fChain->SetBranchAddress("JetCatP2", &JetCatP2, &b_JetCatP2);
   fChain->SetBranchAddress("JetntrkP2", &JetntrkP2, &b_JetntrkP2);
   fChain->SetBranchAddress("JetncluP2", &JetncluP2, &b_JetncluP2);
   fChain->SetBranchAddress("JetchargeP2", &JetchargeP2, &b_JetchargeP2);
   fChain->SetBranchAddress("JetnPFOP2", &JetnPFOP2, &b_JetnPFOP2);
   fChain->SetBranchAddress("JetmassP2", &JetmassP2, &b_JetmassP2);
   fChain->SetBranchAddress("JetEnP2", &JetEnP2, &b_JetEnP2);
   fChain->SetBranchAddress("JetPxP2", &JetPxP2, &b_JetPxP2);
   fChain->SetBranchAddress("JetPyP2", &JetPyP2, &b_JetPyP2);
   fChain->SetBranchAddress("JetPzP2", &JetPzP2, &b_JetPzP2);
   fChain->SetBranchAddress("JetPtP2", &JetPtP2, &b_JetPtP2);
   fChain->SetBranchAddress("JetPtotP2", &JetPtotP2, &b_JetPtotP2);
   fChain->SetBranchAddress("JetRapidityP2", &JetRapidityP2, &b_JetRapidityP2);
   fChain->SetBranchAddress("JetcosThetaP2", &JetcosThetaP2, &b_JetcosThetaP2);
   fChain->SetBranchAddress("JetPDGIDP2", &JetPDGIDP2, &b_JetPDGIDP2);
   fChain->SetBranchAddress("JetMcPxP2", &JetMcPxP2, &b_JetMcPxP2);
   fChain->SetBranchAddress("JetMcPyP2", &JetMcPyP2, &b_JetMcPyP2);
   fChain->SetBranchAddress("JetMcPzP2", &JetMcPzP2, &b_JetMcPzP2);
   fChain->SetBranchAddress("JetMcEnP2", &JetMcEnP2, &b_JetMcEnP2);
   fChain->SetBranchAddress("JetAngleRecMcP2", &JetAngleRecMcP2, &b_JetAngleRecMcP2);
   fChain->SetBranchAddress("PfontrkP3", &PfontrkP3, &b_PfontrkP3);
   fChain->SetBranchAddress("PfoncluP3", &PfoncluP3, &b_PfoncluP3);
   fChain->SetBranchAddress("PfoVtxRP3", &PfoVtxRP3, &b_PfoVtxRP3);
   fChain->SetBranchAddress("PfoVtxZP3", &PfoVtxZP3, &b_PfoVtxZP3);
   fChain->SetBranchAddress("PfoecalP3", &PfoecalP3, &b_PfoecalP3);
   fChain->SetBranchAddress("PfohcalP3", &PfohcalP3, &b_PfohcalP3);
   fChain->SetBranchAddress("PfonHitsP3", &PfonHitsP3, &b_PfonHitsP3);
   fChain->SetBranchAddress("PfototCalEnP3", &PfototCalEnP3, &b_PfototCalEnP3);
   fChain->SetBranchAddress("PfochargeP3", &PfochargeP3, &b_PfochargeP3);
   fChain->SetBranchAddress("PfomassP3", &PfomassP3, &b_PfomassP3);
   fChain->SetBranchAddress("PfoEnP3", &PfoEnP3, &b_PfoEnP3);
   fChain->SetBranchAddress("PfoPxP3", &PfoPxP3, &b_PfoPxP3);
   fChain->SetBranchAddress("PfoPyP3", &PfoPyP3, &b_PfoPyP3);
   fChain->SetBranchAddress("PfoPzP3", &PfoPzP3, &b_PfoPzP3);
   fChain->SetBranchAddress("PfoPtP3", &PfoPtP3, &b_PfoPtP3);
   fChain->SetBranchAddress("PfoPtotP3", &PfoPtotP3, &b_PfoPtotP3);
   fChain->SetBranchAddress("PfoLepTypeP3", &PfoLepTypeP3, &b_PfoLepTypeP3);
   fChain->SetBranchAddress("PfoRapidityP3", &PfoRapidityP3, &b_PfoRapidityP3);
   fChain->SetBranchAddress("PfocosThetaP3", &PfocosThetaP3, &b_PfocosThetaP3);
   fChain->SetBranchAddress("PfoPDGIDP3", &PfoPDGIDP3, &b_PfoPDGIDP3);
   fChain->SetBranchAddress("PfoMCTENP3", &PfoMCTENP3, &b_PfoMCTENP3);
   fChain->SetBranchAddress("PfoMCTPXP3", &PfoMCTPXP3, &b_PfoMCTPXP3);
   fChain->SetBranchAddress("PfoMCTPYP3", &PfoMCTPYP3, &b_PfoMCTPYP3);
   fChain->SetBranchAddress("PfoMCTPZP3", &PfoMCTPZP3, &b_PfoMCTPZP3);
   fChain->SetBranchAddress("PfontrkP4", &PfontrkP4, &b_PfontrkP4);
   fChain->SetBranchAddress("PfoncluP4", &PfoncluP4, &b_PfoncluP4);
   fChain->SetBranchAddress("PfoVtxRP4", &PfoVtxRP4, &b_PfoVtxRP4);
   fChain->SetBranchAddress("PfoVtxZP4", &PfoVtxZP4, &b_PfoVtxZP4);
   fChain->SetBranchAddress("PfoecalP4", &PfoecalP4, &b_PfoecalP4);
   fChain->SetBranchAddress("PfohcalP4", &PfohcalP4, &b_PfohcalP4);
   fChain->SetBranchAddress("PfonHitsP4", &PfonHitsP4, &b_PfonHitsP4);
   fChain->SetBranchAddress("PfototCalEnP4", &PfototCalEnP4, &b_PfototCalEnP4);
   fChain->SetBranchAddress("PfochargeP4", &PfochargeP4, &b_PfochargeP4);
   fChain->SetBranchAddress("PfomassP4", &PfomassP4, &b_PfomassP4);
   fChain->SetBranchAddress("PfoEnP4", &PfoEnP4, &b_PfoEnP4);
   fChain->SetBranchAddress("PfoPxP4", &PfoPxP4, &b_PfoPxP4);
   fChain->SetBranchAddress("PfoPyP4", &PfoPyP4, &b_PfoPyP4);
   fChain->SetBranchAddress("PfoPzP4", &PfoPzP4, &b_PfoPzP4);
   fChain->SetBranchAddress("PfoPtP4", &PfoPtP4, &b_PfoPtP4);
   fChain->SetBranchAddress("PfoPtotP4", &PfoPtotP4, &b_PfoPtotP4);
   fChain->SetBranchAddress("PfoLepTypeP4", &PfoLepTypeP4, &b_PfoLepTypeP4);
   fChain->SetBranchAddress("PfoRapidityP4", &PfoRapidityP4, &b_PfoRapidityP4);
   fChain->SetBranchAddress("PfocosThetaP4", &PfocosThetaP4, &b_PfocosThetaP4);
   fChain->SetBranchAddress("PfoPDGIDP4", &PfoPDGIDP4, &b_PfoPDGIDP4);
   fChain->SetBranchAddress("PfoMCTENP4", &PfoMCTENP4, &b_PfoMCTENP4);
   fChain->SetBranchAddress("PfoMCTPXP4", &PfoMCTPXP4, &b_PfoMCTPXP4);
   fChain->SetBranchAddress("PfoMCTPYP4", &PfoMCTPYP4, &b_PfoMCTPYP4);
   fChain->SetBranchAddress("PfoMCTPZP4", &PfoMCTPZP4, &b_PfoMCTPZP4);
   fChain->SetBranchAddress("idx_raw", &idx_raw, &b_idx_raw);
   fChain->SetBranchAddress("raw_Px[300]", raw_Px, &b_raw_Px);
   fChain->SetBranchAddress("raw_Py[300]", raw_Py, &b_raw_Py);
   fChain->SetBranchAddress("raw_Pz[300]", raw_Pz, &b_raw_Pz);
   fChain->SetBranchAddress("raw_En[300]", raw_En, &b_raw_En);
   fChain->SetBranchAddress("RMassAllPhotons", &RMassAllPhotons, &b_RMassAllPhotons);
   fChain->SetBranchAddress("elec_idx", &elec_idx, &b_elec_idx);
   fChain->SetBranchAddress("ExElec_Px[300]", ExElec_Px, &b_ExElec_Px);
   fChain->SetBranchAddress("ExElec_Py[300]", ExElec_Py, &b_ExElec_Py);
   fChain->SetBranchAddress("ExElec_Pz[300]", ExElec_Pz, &b_ExElec_Pz);
   fChain->SetBranchAddress("ExElec_En[300]", ExElec_En, &b_ExElec_En);
   fChain->SetBranchAddress("ExElec_charge[300]", ExElec_charge, &b_ExElec_charge);
   fChain->SetBranchAddress("ExElec_d0sig[300]", ExElec_d0sig, &b_ExElec_d0sig);
   fChain->SetBranchAddress("ExElec_z0sig[300]", ExElec_z0sig, &b_ExElec_z0sig);
   fChain->SetBranchAddress("muon_idx", &muon_idx, &b_muon_idx);
   fChain->SetBranchAddress("ExMuon_Px[300]", ExMuon_Px, &b_ExMuon_Px);
   fChain->SetBranchAddress("ExMuon_Py[300]", ExMuon_Py, &b_ExMuon_Py);
   fChain->SetBranchAddress("ExMuon_Pz[300]", ExMuon_Pz, &b_ExMuon_Pz);
   fChain->SetBranchAddress("ExMuon_En[300]", ExMuon_En, &b_ExMuon_En);
   fChain->SetBranchAddress("ExMuon_charge[300]", ExMuon_charge, &b_ExMuon_charge);
   fChain->SetBranchAddress("ExMuon_d0sig[300]", ExMuon_d0sig, &b_ExMuon_d0sig);
   fChain->SetBranchAddress("ExMuon_z0sig[300]", ExMuon_z0sig, &b_ExMuon_z0sig);
   fChain->SetBranchAddress("gamma_idx", &gamma_idx, &b_gamma_idx);
   fChain->SetBranchAddress("ExGamma_Px[300]", ExGamma_Px, &b_ExGamma_Px);
   fChain->SetBranchAddress("ExGamma_Py[300]", ExGamma_Py, &b_ExGamma_Py);
   fChain->SetBranchAddress("ExGamma_Pz[300]", ExGamma_Pz, &b_ExGamma_Pz);
   fChain->SetBranchAddress("ExGamma_En[300]", ExGamma_En, &b_ExGamma_En);
   fChain->SetBranchAddress("idx_kmf", &idx_kmf, &b_idx_kmf);
   fChain->SetBranchAddress("kmf_Px[300]", kmf_Px, &b_kmf_Px);
   fChain->SetBranchAddress("kmf_Py[300]", kmf_Py, &b_kmf_Py);
   fChain->SetBranchAddress("kmf_Pz[300]", kmf_Pz, &b_kmf_Pz);
   fChain->SetBranchAddress("kmf_En[300]", kmf_En, &b_kmf_En);
   fChain->SetBranchAddress("RMass12", &RMass12, &b_RMass12);
   fChain->SetBranchAddress("KMass12", &KMass12, &b_KMass12);
   fChain->SetBranchAddress("Rreco12", &Rreco12, &b_Rreco12);
   fChain->SetBranchAddress("Kreco12", &Kreco12, &b_Kreco12);
   fChain->SetBranchAddress("RMass13", &RMass13, &b_RMass13);
   fChain->SetBranchAddress("KMass13", &KMass13, &b_KMass13);
   fChain->SetBranchAddress("Rreco13", &Rreco13, &b_Rreco13);
   fChain->SetBranchAddress("Kreco13", &Kreco13, &b_Kreco13);
   fChain->SetBranchAddress("RMass14", &RMass14, &b_RMass14);
   fChain->SetBranchAddress("KMass14", &KMass14, &b_KMass14);
   fChain->SetBranchAddress("Rreco14", &Rreco14, &b_Rreco14);
   fChain->SetBranchAddress("Kreco14", &Kreco14, &b_Kreco14);
   fChain->SetBranchAddress("RMass23", &RMass23, &b_RMass23);
   fChain->SetBranchAddress("KMass23", &KMass23, &b_KMass23);
   fChain->SetBranchAddress("Rreco23", &Rreco23, &b_Rreco23);
   fChain->SetBranchAddress("Kreco23", &Kreco23, &b_Kreco23);
   fChain->SetBranchAddress("RMass24", &RMass24, &b_RMass24);
   fChain->SetBranchAddress("KMass24", &KMass24, &b_KMass24);
   fChain->SetBranchAddress("Rreco24", &Rreco24, &b_Rreco24);
   fChain->SetBranchAddress("Kreco24", &Kreco24, &b_Kreco24);
   fChain->SetBranchAddress("RMass34", &RMass34, &b_RMass34);
   fChain->SetBranchAddress("KMass34", &KMass34, &b_KMass34);
   fChain->SetBranchAddress("Rreco34", &Rreco34, &b_Rreco34);
   fChain->SetBranchAddress("Kreco34", &Kreco34, &b_Kreco34);
   fChain->SetBranchAddress("RMass123", &RMass123, &b_RMass123);
   fChain->SetBranchAddress("KMass123", &KMass123, &b_KMass123);
   fChain->SetBranchAddress("Rreco123", &Rreco123, &b_Rreco123);
   fChain->SetBranchAddress("Kreco123", &Kreco123, &b_Kreco123);
   fChain->SetBranchAddress("RMass124", &RMass124, &b_RMass124);
   fChain->SetBranchAddress("KMass124", &KMass124, &b_KMass124);
   fChain->SetBranchAddress("Rreco124", &Rreco124, &b_Rreco124);
   fChain->SetBranchAddress("Kreco124", &Kreco124, &b_Kreco124);
   fChain->SetBranchAddress("RMass134", &RMass134, &b_RMass134);
   fChain->SetBranchAddress("KMass134", &KMass134, &b_KMass134);
   fChain->SetBranchAddress("Rreco134", &Rreco134, &b_Rreco134);
   fChain->SetBranchAddress("Kreco134", &Kreco134, &b_Kreco134);
   fChain->SetBranchAddress("RMass234", &RMass234, &b_RMass234);
   fChain->SetBranchAddress("KMass234", &KMass234, &b_KMass234);
   fChain->SetBranchAddress("Rreco234", &Rreco234, &b_Rreco234);
   fChain->SetBranchAddress("Kreco234", &Kreco234, &b_Kreco234);
   fChain->SetBranchAddress("RMass1234", &RMass1234, &b_RMass1234);
   fChain->SetBranchAddress("KMass1234", &KMass1234, &b_KMass1234);
   fChain->SetBranchAddress("Rreco1234", &Rreco1234, &b_Rreco1234);
   fChain->SetBranchAddress("Kreco1234", &Kreco1234, &b_Kreco1234);
   Notify();
}

Bool_t ntEXC2_0001100::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ntEXC2_0001100::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ntEXC2_0001100::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ntEXC2_0001100_cxx
