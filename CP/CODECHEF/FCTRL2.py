try:
    t = input()
    t = int(t)
    
    def fact(n):
        if n == 1  or n == 0 :
            return 1 
        elif n > 1 :
            return n*fact(n-1)
        
        
    for i in range(0,t):
        print(fact(int(input())))
except EOFError:
    pass

