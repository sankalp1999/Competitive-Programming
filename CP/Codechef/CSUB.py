for i in range(int(input())):
    n2 = 0         
    n = int(input())
    s = input()
    for i in s :
        if i == '1':
            n2 = n2 + 1 
    ans = (n2*(n2-1))//(2)
    print(ans + n2)
    
     