#!bash
njobs=21
dataset=/publicfs/baiy/ROOTFiles/mumuHcc/v1/mumuHcc.root
for (( i = 0; i < njobs ; i ++ ))
  do ./mygraph $dataset output_mumuHcc_v1.root mygraph $njobs $i &
done
