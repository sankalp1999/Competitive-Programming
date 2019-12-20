#python3
import sys


n = int(input())
dp = [0]*(n+1)
x = n;
list1 = []
m1 = 0
m2 = 0
m3 = 0
dp[1] = 0
for i in range(2, n + 1):

    m1 = sys.maxsize
    m2 = sys.maxsize
    m3 = dp[i - 1]

    if (i % 3 == 0):
        m1 = dp[i // 3] 
    if (i % 2 == 0):
        m2 = dp[i // 2] 
    minOp = min(m1, m2, m3) 
    dp[i] = minOp + 1
print(dp[n])

p = dp[n]
p2 = n
l1 = []
if (p2 == 1):
    l1.append(1)
while (p >= 0 and p2 != 1):
    if (p2 % 3 == 0):
        p2 = p2//3
        l1.append(p2)
        # print(p2 , end = ' ')
    elif (p2 % 2 == 0):
        p2 = p2 // 2
        l1.append(p2)
        # print(p2 , end = ' ')
    else:
        p2 -= 1
        l1.append(p2)
        # print(p2 , end  = ' ')
    p -= 1
print(*l1)
    