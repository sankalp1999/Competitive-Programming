x = [int(i) for i in input().split()]
a = x[0]
b = x[1]
count  = 0 
for i in range(1,a+1):
    for j in range(1,b+1):
        if (i+j)%5 == 0:
            for k in range(j,b+1,5):
                if (i+k)%5 == 0:
                    count = count + 1
                break
        
                
                
                    
            
        
print(count)