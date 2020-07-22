t = int(input())
for i in range(t):
    size = int(input())
    flag = 1 
    x = [int(i) for i in input().split()]
    for i in x :
        if i > 7 :
            flag = 0 
            print("aksdjk")
            break
    m = len(set(x))
#    print(m)
    if m == 7 :
        flag =1 
    elif m != 7 :
        flag = 0
    # this will ensure that x < 7
            
    for i in range(size):
        if x[i] != x[size - i - 1]:
            flag =0
    if flag == 1 :
        print("yes")
    elif (flag == 0 ):
        print("no")
        
        
            