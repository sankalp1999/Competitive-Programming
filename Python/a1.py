n = int(input())
for q in range(0,n):
    
    b = input()
    c = input()
    a = list(b)
    string = ''
    string2 = ''
    string3 = []
    list1 = []
    list2 = []
    for i in range(len(a)) :
        for j in a[i] :
            string = string + j 
            list1.append(string)
    #        print(string)
    a.reverse()    
    for i in range(len(a)) :
        for j in a[i] :
            string2 = string2 + j 
            list2.append(string2[::-1])
            
            
    #        print(string2)
            
    list3 = [a[-1] + a[0]]
                
        
        
    #print(string3)         
    x2 = list1 + list2 + list3 + a 
     
    final = (sorted(set((x2))))
    for z in final :
        print(z)         
         
        
                
            
    
        