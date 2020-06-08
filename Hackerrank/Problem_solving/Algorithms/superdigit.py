
import math
import os
import random
import re
import sys

# Complete the superDigit function below.
def superDigit(n, k):
    sum1 = 0 
    n = int(n)
    while(n!=0):
        rem = n%10
        sum1 = sum1 + rem 
        if (sum1 < 10 ):
            break 
        elif (sum1 > 10):
            n = sum1     
        n = n // 10
    
    n = sum1*k
    while(n!=0):
        rem = n%10
        sum1 = sum1 + rem 
        if (sum1 < 10 ):
            result = sum1 
            break 
        elif (sum1 > 10):
            n = sum1     
        n = n // 10
    return result        
print(superDigit(148,3))    