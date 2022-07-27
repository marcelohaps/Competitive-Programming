#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr, n):
    positive = 0
    negative = 0
    nule = 0
    count = 0
    for i in arr:
        count += 1
        if i > 0:
            positive += 1
        elif i < 0:
            negative += 1
        else:
            nule += 1
    print(positive/n)
    print(negative/n)
    print(nule/n)
        

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr, n)
