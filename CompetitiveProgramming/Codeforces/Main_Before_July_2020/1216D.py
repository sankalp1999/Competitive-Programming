import math
n = int(input())
list1 = [int(i) for i in input().split()]
max1 = max(list1)
gcd1 = max1 - list1[0]
for i in range(1,len(list1)):
	diff = list1[i] - list1[i-1]
	gcd1 = math.gcd(gcd1,diff)
count =  0
sum1 = sum(list1)

diff = (max1*len(list1) - sum1)//gcd1

print(diff, end = ' ')
print(gcd1,end = ' ')