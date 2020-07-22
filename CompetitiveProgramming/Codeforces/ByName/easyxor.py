n, m, k = input().split()
def countSetBits(n): 
  
    count = 0
    while (n): 
        n &= (n-1)  
        count+= 1
      
    return count 
m = int(m) + 1
k = int(k)
list1 = []
for i in range(m):
	temp = int(input())
	list1.append(temp)
friends = 0
for i in range(len(list1) - 1):
	xor = list1[i]^list1[-1]
	csb = countSetBits(xor)
	if csb <= k:
		friends += 1
print(friends)