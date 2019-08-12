try:
    al =  []
    t = int(input())
    for i in range(0,t):
            
        n = int(input())
        dummy =n 
        i = 12
        #q = math.pow(2,i-1)
        #dummy = n 
        def bit(n): 
          
            count = 0
            while (n): 
                n &= (n-1)  
                count+=1
              
            return count 
        count = bit(n) 
    
        count2 = 0 
        
        if ( count == 1 and n > 2048):
            a = n//2048
            al.append(a)
        elif (count == 1 and n <= 2048):
            
            al.append(count)
        elif (count != 1 and n > 2048):
            a = 0 
            while(dummy >= 2048):
                dummy = dummy - 2048
                a = a + 1
            count = bit(dummy) + a
            al.append(count)
        elif (count != 1 and n < 2048):
            al.append(count)
            
            
    for i in al :
        print(i)
except EOFError:
    pass            
    
    
            
        