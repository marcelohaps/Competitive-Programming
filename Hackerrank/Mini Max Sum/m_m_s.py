#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    arr.sort()
    tamanho_array = len(arr)
    soma_minima = sum(arr[0:4])
    soma_maxima = sum(arr[tamanho_array-4:])
    print(soma_minima, soma_maxima)
    

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
