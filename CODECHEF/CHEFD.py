t = input()
t = int(t)
for i in range(0,t):
    x = [i for i in input().split()]
    a = str(x[0])
    a = list(a)
    b = int((x[1]))
    
    for i in range(len(a)-1,0,-1) :
        
        if b > int(a[i]) :
            a.pop(i)
            a.append(b)
            
    b = 0
    j = len(a) -1 
    
    for  i in a :
        b =  b + int(i)*(10**j) 
        j= j - 1
    print(b)    
        
            
        
    
    