t = int(input())
ans = []
for i in range(0,t):
    a = [(i) for i in input().split(" ")]
    N = a[0]
    d = a[1]
    N1= int(N)
        # N does not contain any zeroes 
    z2 = 1
    
    while(z2 !=0  ):
        major = N +d
        
        
        
        list1 = list()
        for i in range(0,len(major)-1):
            list1.append((major[i]))
    #            print(list1)
        i = 0 
        li = list()
        b = "0"
        j = 0 
        list2 = []
        list2  = list1
    #        print(list2)
        for i in range(0,len(major)-1):
                
            list2 = [i for i in list1]
            list2.pop(i)
            for j in range(0,len(list1)-1):
                    
                b = b + list2[j]
            b = b + major[-1]   
            if (int(b)) <= (N1) :
    #                
                li.append(int(b))    
            b = "0"
#        print(len(li))
#        print((li))    
#        print("testint1")
        if len(li) == 0 :
            print(N)
            break
        if len(li) > 0 :
    #        ans.append(min(li))
#            print("case2")        
            z = min(li)
            if z == z2 :
                print(z)
                break 
            
            if z2 != z  :
                z2 = z 
                N = z
                N = str(N)
#                print("hi")
                
                continue
for i in ans:
    print(i)
    


        
 
    

    