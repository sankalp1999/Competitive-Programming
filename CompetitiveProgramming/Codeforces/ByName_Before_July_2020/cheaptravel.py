x = [int(i) for i in input().split()]
n = x[0]
m = x[1]
a = x[2]
b = x[3]
if (m / b == a ):
    ans = n // b
    print(int(ans))
elif (m / b < a ):
    c = 0 #amount spent
    while (n >= a):
        n = n - b
        c = c + b
    while (n >= 0):
        n = n - a
        c = c + a
    print(c)
elif (m / b > a):
    c = 0 
    while (n >= b):
        n = n - a
        c = c + a
    while (n >= 0):
        n = n - b
        c = c + b
    print(c)

           
    
        