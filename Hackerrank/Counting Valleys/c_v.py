#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countingValleys' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER steps
#  2. STRING path
#

steps = int(input())
contador = 0
soma = 0
path = input()
vector = []
for i in range(0, len(path)):
    if path[i] == 'D':
        contador += 1
        vector.append(contador)
    elif path[i] == 'U':
        contador -= 1
        vector.append(contador)
    
for i in range(0, len(vector)):
    if vector[i] == 0 and vector[i-1] > 0:
        soma += 1

print(soma)
        


    

