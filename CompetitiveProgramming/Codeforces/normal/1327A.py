import math

t = int(input())
while(t!=0):
    t -= 1
    n, k = map(int, input().split())
    if k == 1:
        if(n%2 == 0):
            print("NO")
        else:
            print("YES")
        continue
    # print(int(n**0.5))
    if(k > (n**0.5)):
        print("NO")
        
        continue
    if(n%2==0):
        if(k%2==0):
            print("YES")
        else:
            print("NO")
        continue
    if(n%2==1):
        if(k%2==1):
            print("YES")
        else:
            print("NO")
        continue