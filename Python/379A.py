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
        

    elif n > 2 :
        

        factor = 0
        calci = rounder(k-1,n-1)
        calci = calci%mod
        a = ((calci+1)/2)%mod
        multi = ((calci)*(a))%mod
        ans = (((n-1)%mod)*((multi)%mod))
        ans = ans%mod
#        ans = math.ceil(ans)
        if(k-1)%(n-1) == 0:
            factor = 0 
                
        else:
            factor = (n-1)-((k-1)%(n-1))
            factor = factor%mod
        sub = (factor*calci)%mod    
        ans = (ans%mod - sub)%mod
        
        print(int(ans))
            
    t = t -1     