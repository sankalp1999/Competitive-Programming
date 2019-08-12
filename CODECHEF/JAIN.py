t = int(input())
def string():
    strlist = []
    count = 0 
    n = int(input())
    
    for i in range(n):
        strlist.append(input())
    
    for i in range(0,n,1):
        for j in range(i+1,n,1):
            a = set(strlist[i])
            b = set(strlist[j])
            c = a.union(b)
            if len(c) == 5 :
                count = count + 1
            
    print(count) 
for i in range(0,t):
    
    string()    
            
            
    
    
    