t = int(input())
while(t!=0):
    a = input()
    b = input()
    t -= 1
    
    if( int(b, 2) == 0):
        print(0)
    elif int(a, 2) == 0 or int(a,2)&int(b,2) == 0:
        print(1)
    else:
        
        a = '0'*(len(b) - len(a)) + a
        b = '0'*(len(a) - len(b)) + b
        b1 = len(b)
        
        count = 0
        c2 = 0
        flag = 0 
        for i in range(b1 -1, -1, -1):
            ai = int(a[i])
            bi = int(b[i])
            if(flag == 1 ):
                if(ai^bi == 1):
                    count += 1
                else :
                    
                    flag = 0
                    count = 0
            if(ai & bi == 1):
                flag = 1
           
            
                    
            c2 = max(c2, count)
        
        print(c2 + 2 )