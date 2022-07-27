#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countApplesAndOranges' function below.
#
# The function accepts following parameters:
#  1. INTEGER s
#  2. INTEGER t
#  3. INTEGER a
#  4. INTEGER b
#  5. INTEGER_ARRAY apples
#  6. INTEGER_ARRAY oranges
#

def countApplesAndOranges(s, t, a, b, apples, oranges):
    vec_apples = []
    vec_oranges = []
    count_apples = 0
    count_oranges = 0
    for i in apples:
        tec = a + i
        vec_apples.append(tec)
    for j in oranges:
        gec = b + j
        vec_oranges.append(gec)
    
    for i in vec_apples:
        if i in range(s, t+1):
            count_apples += 1
    for j in vec_oranges:
        if j in range(s, t+1):
            count_oranges += 1
            
    print(count_apples)
    print(count_oranges)
    
    

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    s = int(first_multiple_input[0])

    t = int(first_multiple_input[1])

    second_multiple_input = input().rstrip().split()

    a = int(second_multiple_input[0])

    b = int(second_multiple_input[1])

    third_multiple_input = input().rstrip().split()

    m = int(third_multiple_input[0])

    n = int(third_multiple_input[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
