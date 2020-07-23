def f():
    x = [int(i) for i in input().split()]
    a = x[0]
    b = x[1]
    x2 = [int(i) for i in input().split()]
    if len(x2) == 1:
        return x2[0]
    else:
        return (x2[-1] + x2[0])//2
n = int(input())
for i in range(n):
    a = f()
    print(a)