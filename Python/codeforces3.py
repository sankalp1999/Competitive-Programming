n = [int(i) for i in input().split()]
n1 = n[0]
m1 = n[1]
x = [int(i) for i in input().split()]
t = 0
t = x[0] -1  
for i in range(len(x)):
    if i == len(x) -1 :
        break
    
    if (x[i] == x[i+1]):
        t= t + 0
       
    elif (x[i]<x[i+1]) :
       
       
        t = t + x[i+1] - x[i]
    elif(x[i+1] < x[i])  :
     
    
        a = x[i] - x[i+1]
        t= t + n1 -a 
        
print(t)        
        
    