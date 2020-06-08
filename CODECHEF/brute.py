import math
t = int(input())
def rounder(k,n):
    
    calci1 = math.ceil(k/n)
    return calci1    
mod = (1000000007)
while(t !=0 ):
    sample = [int(i) for i in input().split()]
    n = sample[0]
    k = sample[1]
    if n == 2 :
        k = k - 1
        ans= ((k*(k+1))//2)%(1000000007)
        print(ans)
        
    if n == 3 :
        ans1 = (k**2)/4
        ans1 = int(ans1)
        print(ans1%mod)
#
    
    elif n > 2 :
        

        factor = 0
        calci = rounder(k-1,n-1)

        multi = (calci)*(calci+1)
        ans = (n-1)*(multi)
        l = ans
        ans = l//2
        ans2 = l/2
#        print(ans,ans2)
        if(k-1)%(n-1) == 0:
            factor = 0 
                
        else:
            factor = (n-1)-((k-1)%(n-1))
        ans = ans - factor*calci
        ans2 = ans2 - factor*calci
        b = (ans%(int)(1e9+7) )
#        print(b)
        c = ((ans2)%(int)(1e9+7))
        print(int(c))    
    t = t -1     