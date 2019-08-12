t = int(input())
for i in range(t):
    
    
    n = int(input())
    count = 0 
    for i in range(1,n+1):
        for j in range(i,n+1):
          
            if (i!=j ):
                
                if i^j <= n :
                    count = count + 1
    print(count)                