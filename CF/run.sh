#!/bin/bash


g++ $1
./a.out <input.in >output.out	
diff output.out jout.out
