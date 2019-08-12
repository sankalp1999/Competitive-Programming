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
        if k <= n:
            print((k-1)%mod)
        else:    
            calci = rounder(k-1,n-1)
            calci = calci%mod
            multi = (calci*(calci+1)%mod)%mod
            ans = (((n-1)%mod)*(multi%mod))%mod
            ans = (ans*500000004)%mod
#
            if(k-1)%(n-1) == 0:
                factor = 0 

            else:
                factor = (n-1)-((k-1)%(n-1))
            multi2 = ((factor%mod)*calci)%mod
            ans = (ans-multi2+mod)%mod
            
            print(ans)
            
            
    t = t -1     