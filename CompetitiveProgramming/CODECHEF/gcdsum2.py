t = int(input())
def gcd(a, b) : 
      
    if (a == b) : 
        return a 
  
    # GCD(0, b) == b; GCD(a, 0) == a,  
    # GCD(0, 0) == 0  
    if (a == 0) : 
        return b 
  
    if (b == 0) : 
        return a 
  
    # look for factors of 2 
    # a is even 
    if ((~a & 1)== 1 ) :      
          
        # b is odd 
        if ((b & 1)== 1) :      
            return gcd(a >> 1, b) 
        else : 
            # both a and b are even 
            return (gcd(a >> 1, b >> 1) << 1) 
      
    # a is odd, b is even 
    if ((~b & 1)== 1) :  
        return gcd(a, b >> 1) 
  
    # reduce larger number 
    if (a > b) : 
        return gcd((a - b) >> 1, b) 
  
    return gcd((b - a) >> 1, a) 


while(t!=0):
    n = int(input())
    s = [int(i) for i in input().split()]
    s = list(set(s))
    s = sorted(s,reverse = True)
    s2 = []
    s2 = list(s)
    leng = len(s2)
    count = 0
    for i in s:
        if count> 1000:
            print("wrong")
        if i > 10**8:
            count += 1 
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
            
            if count > 2 :
                break
            count = count + 1 
            b = s[p+1]
            s.remove(s[p+1])
            gcd2 = gcd(s[-1],s[p])
            ans = gcd2 + b
            if ans > max1:
                gcd2 = s[0]
                for i in s :
                    if i % gcd2 != 0 :
                        flag2 = 1
                        for c in s:
                
                            gcd2 = gcd(gcd2 , c)
                            ans = gcd2 + b
                    elif flag2 ==1 :
                        break
                

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