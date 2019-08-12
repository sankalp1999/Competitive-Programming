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
#        
#        print(ans%mod)
    elif k == n + 1:
        print(k%mod)
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
            ans = (n-1)*(calci*(calci+1))

            ans = ans//2
#            print("look",((n-1)-(k-1)%(n-1)))
            if(k-1)%(n-1) == 0:
                factor = 0 
#                print("k-1:")
            else:
                factor = (n-1)-((k-1)%(n-1))
#                print("factor is :",factor,factor*calci)
#                print(ans)
                ans = (ans - factor*calci)
            b = (ans%mod)
            
            ans = ((k**2)//4)
            print(b,ans%mod)
            
    t = t -1     