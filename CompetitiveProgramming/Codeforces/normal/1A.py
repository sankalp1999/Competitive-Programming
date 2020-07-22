import math
x = [int(i) for i in input().split()]
a = x[0]
b = x[1]
c = x[2]
ans = math.ceil(a/c)
ans2 = math.ceil(b/c)
ans3 = ans*ans2
print(ans3)