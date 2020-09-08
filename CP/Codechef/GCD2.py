from math import gcd
n = int(input())
while n:
	n -= 1
	a, b = map(int, input().split())
	print(gcd(a, b))