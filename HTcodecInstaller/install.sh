#! /bin/bash

mkdir /bin/HTcodec

gcc -o HTcodec main.cpp HTEncode.cpp HTDecode.cpp

cp HTcodec /bin/HTcodec/HTcodec

echo "export PATH=$PATH:/bin/HTcodec">/etc/profile

source /etc/profile
