#!/bin/bash
rm -r pic;
rm output.txt;
./darknet server &> output.txt
mkdir pic;
mv *_received.jpg pic/;
