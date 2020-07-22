t = int(input())
for i in range(t):
    z  = [int(i) for i in input().split()]
    n = z[0]
    b = z[1]
    m = z[2]
    
    
    count = 0
    total = 0 
    
    while(n > 0):
        if (n%2 == 0):
            x = n//2
            n = n - x 
        elif (n%2 == 1):
            x = (n+1)//2
            n = n - x 
        total = total + (x*m)*(2**count) 
        count = count + 1
        if (n != 0):
            total = total + b
             
    print(total)        
            
        
        
    
    