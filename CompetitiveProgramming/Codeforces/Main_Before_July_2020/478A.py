l = [int(i) for i in input().split()]
a = sum(l)
if(a == 0):
    print(-1)
elif a%5 == 0 :
    print(a//5)
else:
    print(-1)