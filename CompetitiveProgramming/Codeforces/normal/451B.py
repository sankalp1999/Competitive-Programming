n = int(input())
arr = [int(i) for i in input().split()]
arr2 = list(arr)
arr.sort()
pos1 = 0
pos2 = 0
flag = 1
count = 0 
for i in range(len(arr)):
	if(arr[i] != arr2[i] and flag == 1):
		pos1 = i
		flag = 0
		
	if(arr[i] != arr2[i]):
		pos2 = i
		count += 1

if(count == 0):
	print("yes")
	print(1,1)
else:
	arr2[pos1:pos2+1] = arr2[pos1:pos2+1][::-1] 
	new = list(arr2)
	if(new == arr):
		print("yes")
		print(pos1 +1 , pos2 + 1)
	else:
		print("no")