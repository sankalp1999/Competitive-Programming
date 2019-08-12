def superdigit(n,k):
    n = int(n)
    s = 0 # sum of the elements 
    result = 1
    flag = 1 
    while(flag):
        s = 0
        while(n!=0):
            rem = n%10
            s = s + rem
            n = n//10
        if s >= 10 :
#            print(s)
            n = s 
        elif s < 10 : 
            result = s
            flag = 0
    result = result*k
    flag =1
    n = result
    while(flag):
        s = 0
        while(n!=0):
            rem = n%10
            s = s + rem
            n = n//10
        if s >= 10 :
#            print(s)
            n = s 
        elif s < 10 : 
            result = s
            flag = 0    
            
    return result 
print(superdigit("148",3))    
    
            
        