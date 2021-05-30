#!bash
njobs=21
dataset=/publicfs/baiy/ROOTFiles/mumuHbb/v1/mumuHbb.root
for (( i = 0; i < njobs ; i ++ ))
  do ./mygraph $dataset output_mumuHbb_v1.root mygraph $njobs $i &
done
