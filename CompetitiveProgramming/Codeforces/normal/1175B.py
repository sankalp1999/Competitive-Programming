

def a():
    multi = 1 
    s = 0 
    n = int(input())
    result = 0
    fc = 0 
    over = 2**32 -1
    while(n!=0):
        
        x = [i for i in input().split()]
        n =  n- 1  
        if result <= over:
        
        
            if len(x) ==1 :
                if (x[0] == 'add'):
                    s = s + 1
                    result = result + s*multi
                elif x[0] == 'end':
                    multi = 1
                    
            elif (len(x) == 2 ):
                if (x[0] == 'for'):
                    multi = multi*int(x[1])
                   
        elif result > over:
            return ("OVERFLOW!!!")
            
            break            
    
            
    return (result) 
    
                
s1 = a()
print(s1)