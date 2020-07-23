z = [int(i) for i in input().split()]
a = z[0]
b = z[1]
result = a 
add = 0  
def candles(a):
    while(a>0):
        a = a -b 
        add = add + 1 
    result = result + add    
    if (add > b ):
        candles(add)    
    return result
