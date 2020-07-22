x = [4 , 7 , 47, 44 , 77 ,447 , 474 ,744, 777, 774 ,747, 477]
n = int(input())
flag = 0 
for i in x :
    if n % i == 0:
        print("YES")
        flag = 1 
        break
if flag == 0:
    print("NO")