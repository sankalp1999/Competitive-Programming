t = int(input())
while(t!=0):
    n = 0
    n = int(input())
    a = [int(i) for i in input().split()]
    count =  0
    max1 = 0
   # a2 = sorted(a)
    for i in range(n):
        count = 0
        for j in range(0, i):
            if (a[j] % a[i] == 0):
                count += 1
        if (count > max1):
            max1 = count
    print(max1)
    t -= 1