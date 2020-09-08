n, k = input().split()
n = int(n)
k = int(k)
a = [i for i in input().split()]
b = [i for i in input().split()]
q = int(input())
while (q != 0):
    q -= 1
    year = int(input())
    year -= 1
    print(a[year % n] + b[year % k])