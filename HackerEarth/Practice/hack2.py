
def stringcmp():
    string = input()

    ans = 0
    x = list(string)
    for i in range(0,len(string)):
        if i < (len(string) - 1) :
            if x[i] == x[i+1]:
                ans = ans + 1 
                print(ans)        
        
        
            

           