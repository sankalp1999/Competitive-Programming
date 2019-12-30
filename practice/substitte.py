t = int(input())
while(t!=0):
    n = int(input())
    size = n
    l1 = [int(i) for i in input().split()]
    div = size//4
    l2 = sorted(l1)
    c1 = div*1 
    c2 = div*2 
    c3 = div*3 
    c4 = div*4 
    s1 = 0
    s2 = 0 
    s3 = 0 
    s4 = 0
    flag = 0
    
    if(div == 1):
    
        if(l2[0] != l2[1] and l2[1] != l2[2] and l2[2] != l2[3]):
            print(l2[1], l2[2], l2[3])
            continue
        print(-1)
        continue
             
       
            
        
    for i in range(len(l1)):
        if(l2[i] < l2[c1] ):
            s1 += 1
        if(l2[i] >= l2[c1] and l2[i] < l2[c2]):
            s2 += 1
        if(l2[i] >= l2[c2] and l2[i] < l2[c3]):
            s3 += 1
        if(l2[i] >= l2[c3] and l2[i] < l2[c4-1]):
            s4 += 1
#    print(s1,s2,s3,s4)
    print(s1,s2,s3,s4)
    if(s1 == s2 and s2== s3 and s3 == s4 ):
        print(l2[c2],l2[c3],l2[c4])
    
    else:
        print(-1)
        
    
    
    t-=1