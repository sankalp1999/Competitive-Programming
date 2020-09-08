t = int(input())
al = [ ]
def string():
    global al 
    strlist = []
    count = 0 
    n = int(input())
    
    for i in range(n):
        c = input()
        c = set(list(c))
        strlist.append(c)
    
    for i in range(0,n,1):
        for j in range(i+1,n,1):
            a = (strlist[i])
            b = (strlist[j])
            c = a.union(b)
            if len(c) == 5 :
                count = count + 1
            
    al.append(count)
    
for i in range(0,t):
    
    string()    
for i in al :
    print(i)
            
    
    
    