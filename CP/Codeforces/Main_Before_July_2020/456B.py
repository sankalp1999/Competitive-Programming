n = input()
if(len(n) > 1):
	s = n[-2] + n[-1]
else:
	s = n[0]
if(int(s) % 4 == 0):
	print(4)
else:
	print(0)