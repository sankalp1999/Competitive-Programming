#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sumXor function below.
def sumXor(n):
    count = 0
  
    for i in bin(n)[2:]:
        if ( i == '0' ):
            count += 1
    if (n == 0 ):
    {
        return 1
    }
    return 2**count
                
#logic is that xor is used as a binary addition without accounting for the carry.
#To not generate a carry or just to add two numbers at a position, only one of them should be 
# '1', otherwise their xor will be zero. So, for every 0 in n, we have two choices, because 
# if we have a zero in n, then a 0 or 1 in x will result in zero.
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    result = sumXor(n)

    fptr.write(str(result) + '\n')

    fptr.close()
