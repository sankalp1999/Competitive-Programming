n = int(input())
for i in range(n):
	length = int(input())
	s1 = input()
	s2 = input()
	l1 = []
	l2 = []
	if s1 != s2:
		for i in s1:
			l1.append(i)
		for i in s2 :
			l2.append(i)
		l1 = sorted(l1)
		l2 = sorted(l2)
		if l1 == l2 :
			print("YES")
		else:
			print("NO")
	else:
		print("YES")
			
