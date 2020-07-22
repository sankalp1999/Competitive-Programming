n = int(input())


for i in range(n):
    x = [int(i) for i in input().split()]
    a = x[0]
    b = x[1]
    d = 0
    k = 0 
    c3 =0 
    while(a != 0):
        c = a//b
        
        c2 = c*b 
        if (c2 != a ):
            c3 = a - c2
            k = k + c3
            a = a - c3
           
            
        else:
            a = c 
            k = k + 1
        
            
    print(k)