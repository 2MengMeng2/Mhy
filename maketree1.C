{
     string inputfile("/publicfs/datasets/fullsim/mumuH/mumuHgg.root");
     R__LOAD_LIBRARY(ntEXC2_0001100_C);
     gSystem->Load("ntEXC2_0001100_C.so");
     TChain *s1 = new TChain("ntEXC2_0001100");
     s1->Add(inputfile.c_str());
     ntEXC2_0001100 test1(s1);
     test1.Loop("output_gg_prob.root");
}
