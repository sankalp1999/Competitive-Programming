d = {}
a = 0
b = 1
c = a + b
for i in range(1, 4783):
		a = b
		b = c
		c = a + b
		d[c] = i
t = int(input())
while(t!=0):
	t -= 1
	q = int(input())
	# print(q)
	if q in d:
		print("YES")
	else:
		print("NO")