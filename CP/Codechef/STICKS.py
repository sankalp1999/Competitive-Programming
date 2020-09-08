t = int(input())
while(t!= 0):
	n = int(input())
	x = [int(i) for i in input().split()]
	count = [0]*1002
	for i in x:
		count[i] += 1
	l = 0
	b = 0 
	for i in range(len(x), -1, -1):
		if(count[i] >= 2):
			l = i
			count[i] -= 2
			break
	for i in range(len(x), -1, -1):
		if(count[i] >= 2):
			b = i
			break
	if(l == 0 or b == 0):print(-1)
	else: print(l*b)
	
	
	
	
	t -= 1
	