input1 = [int(i) for i in input().split()]
a = input1[0]
b = input1[1]
count = 0 
while(a!=0 and b!=0):
	a =a - 1 
	b = b - 1
	count = count + 1 
if a == 0:
	second  =  b // 2 
elif b == 0 :
	second = a // 2 
print(count, second)