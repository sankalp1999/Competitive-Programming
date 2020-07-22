t = int(input())
for i in range(t):
    k = int(input())

    
    result = 10
    if k == 1:
        print(10)
    else :
        a = 2 
        b = k - 1
        p = (int)(1e9+7) 
        d = pow(a, b, p)
        result = ((10%p)*d)%p
        
        print(result)    

