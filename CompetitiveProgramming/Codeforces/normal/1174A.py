n = int(input())
z = [int(i) for i in input().split()]
z2 = list(z)
z2.sort()
if(len(set(z2)) == 1):
	print(-1)
else:
	print(*z2)