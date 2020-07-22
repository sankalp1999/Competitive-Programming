n = int(input())
x = [int(i) for i in input().split()]
odd = 0
even = 0
for i in x :
    if i%2 ==0 :
        even = 1 
    elif i%2 ==1 :
        odd = 1
if (odd and even):
    x.sort()
    print(*x)        
elif odd == 1 or even ==1 :
    print(*x)