n = int(input())
if n%4 == 1:
	cat = 'A'
elif n%4 == 3:
	cat = 'B'
elif n%4 == 2 :
	cat = 'C'
elif n%4 == 0:
	cat = 'D'
if cat == 'A':
	print("0" + " " + "A")
elif cat == 'B':
	print("2" + " " + "A")
elif cat == 'D':
	print("1" + " " + "A")
elif cat == 'C':
	print("1" + " " + "B")