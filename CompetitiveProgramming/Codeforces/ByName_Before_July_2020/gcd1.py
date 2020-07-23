t = int(input())
from math import gcd

while(t!=0):
    n = int(input())
    s = [int(i) for i in input().split()]
    s = list(set(s))
    s = sorted(s,reverse = True)
    s2 = []
    s2 = list(s)
    leng = len(s2)
    
    
    if leng > 2 :
        
        p = 0
        b = s[0]
        flag1 = 0 
        flag2 = 0
        s.remove(s[0])
        gcd1 = gcd(s[-1],s[-2])
        for i in s:
            if i % gcd1 != 0:
                gcd1 = s[0]
                flag1 = 1 
                for c in s:
                    gcd1 = gcd(gcd1 , c)
            elif flag1 == 1 :
                break
                
        
        ans1 = gcd1 + b
        max1 = ans1
        count = 0 
        s = list(s2)
     
        while( p+1 != (len(s2)//2 + 1) ):
#            print(p)
            
            if p > 2 :
                break
            count = count + 1 
            b = s[p+1]
            s.remove(s[p+1])
            gcd2 = gcd(s[-1],s[p])
            ans = gcd2 + b
            if ans > max1:

                gcd2 = s[0]
                for c in s:
                    gcd2 = gcd(gcd2, c)
                ans = gcd2 + b
                 
                

                if ans > max1:         
                    max1 = ans
            s = list(s2)
            p = p + 1
            
        print(max1)
        
    elif leng == 2 :
        
        ans = s2[0] + s2[1]
        print(ans)
    elif leng == 1:
        ans = 2*s2[0]
        print(ans)
        
    t -= 1