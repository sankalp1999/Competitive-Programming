# cook your dish here
for _ in range(int(input())):
    n = int(input())
    a = [int(n) for n in input().split(" ")]
    n1 = min(a)
    a.remove(n1)
    n2 = min(a)
    print(n1+n2)