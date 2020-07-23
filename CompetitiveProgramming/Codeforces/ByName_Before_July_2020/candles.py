z = [int(i) for i in input().split()]
a = z[0]
b = z[1]
result = a 
add = 0  
def candles(a):
    global result 
    global add
    add = 0 
    while(a>0 and a>=b):

        a = a -b 
        add = add + 1 
    result = result + add    
    if (add >= b ):
        candles(add)    
    return result
print(candles(a))    

