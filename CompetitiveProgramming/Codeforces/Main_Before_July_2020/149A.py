k = int(input())
l = [int(i) for i in input().split()]
l = sorted(l, reverse = True)
if sum(l) < k:
	print(-1)
elif k == 0:
	print(k)
else:
	sum1 = 0
	
	for i in range(len(l)):
		sum1 += l[i]
		
		if(sum1 >=k):
			print(i+1)
			break