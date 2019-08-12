import math
t = int(input())
def rounder(k,n):

    value = k/n - k//n
#    print("value is : ",value)
#    if value >= 0.5 :
    calci1 = math.ceil(k/n)
#    else :
#        calci1 = math.floor(k/n)
        
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
        
#    elif n == 3:
#        ans = ((k**2)//4)
        
        
#    elif k == n + 1:
#        print(k%mod)
    elif n > 2  :

        factor = 0
        if k <= n:
            print((k-1)%mod)
        else:    
#            if math.floor(k/n) == math.ceil(k/n) and k != n :
#                calci = (k//n) + 1
#                print("math.floor")
#            else:
                
            calci = rounder(k-1,n-1)

#            print("calci is :",calci)
#            print(calci)
            multi = ((calci%mod)*((calci+1)%mod))%mod
#            print(multi)
            nfactor = (n-1)%mod
            ans = ((nfactor)*(multi))%mod

            ans = ans//2
#            print("look",((n-1)-(k-1)%(n-1)))
            if(k-1)%(n-1) == 0:
                factor = 0 
#                print("k-1:")
            else:
                factor = (n-1)-((k-1)%(n-1))
#                print("factor is :",factor,factor*calci)
#                print(ans)
            ans = (((ans%mod) - (((factor)%mod)*((calci)%mod))%mod)%mod)
            b = ans
            print(b)
#
#            p = (int)(1e9+7) 
#            d = pow(k, 2, p)
#            d = d//4
#            print(b,d)
#            ans = ((k**2)//4)
#            print(b,ans)
            
    t = t -1     