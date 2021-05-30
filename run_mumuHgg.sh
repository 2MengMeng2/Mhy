#!bash
njobs=21
dataset=/publicfs/baiy/ROOTFiles/mumuHgg/v1/mumuHgg.root
for (( i = 0; i < njobs ; i ++ ))
  do ./mygraph $dataset output_mumuHgg_v1.root mygraph $njobs $i &
done
