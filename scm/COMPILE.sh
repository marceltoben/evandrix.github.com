#!/bin/bash
cd chicken*
sudo make C_COMPILER=gcc-4.2 PLATFORM=macosx ARCH=x86-64 build
sudo make C_COMPILER=gcc-4.2 PLATFORM=macosx ARCH=x86-64 install
