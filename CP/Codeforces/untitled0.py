n = int(input())
while( n != 0):
    
    l = [int(i) for i in input().split()]
    s = l[0]
    l.remove(l[0])
    s = int(s)
    if (l[2] < l[0]):
        l.reverse()
#    print(l)1
    if(s >= l[0]+l[1] +l[2] or s > 5):
        print(1)
        n -= 1
        continue
    
    c  = 0
    i = 0
    while(1):
        if(i <= 2):
            if(i + 1 <= 2 and s >= l[i] + l[i+1]):
                l[i] = 0
                l[i+1] = 0
                c += 1
                i += 2
            elif s >= l[i]:
                l[i]= 0 
                i += 1 
                c += 1
            elif l[0] == 0 and l[1] == 0 and l[2] == 0:
                break
                
        else:
            break
    print(c)
    
    
    n -= 1