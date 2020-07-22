n = int(input())
a = [int(i) for i in input().split()]
e = 0
o = 0
for i in a:
	if(i % 2 == 0):
		e += 1
	else:
		o += 1
if e == 1:
	for i in range(len(a)):
		if(a[i]%2 == 0):
			print(i + 1)
else:
	for i in range(len(a)):
		if(a[i]%2 == 1):
			print(i + 1)