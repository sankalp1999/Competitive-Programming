list1 = [i*i for i in range(1,101)]
n = int(input())
if n > 1:
	print(list1[n-1]+list1[n-2])
elif n == 1 :
	print(1)