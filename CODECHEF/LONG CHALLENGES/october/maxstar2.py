import math


def is_prime(n): 
    if n <= 1: 
        return False
    if n == 2: 
        return True
    if n > 2 and n % 2 == 0: 
        return False
  
    max_div = math.floor(math.sqrt(n)) 
    for i in range(3, 1 + max_div, 2): 
        if n % i == 0: 
            return False
    return True

t = int(input())
while(t!=0):
	n = int(input())
	z = [int(i) for i in input().split()]
	onepos = 0
	count = 0
	z2 = []
	for i in z : 
		count += 1
		if(is_prime(i) == True or i == 1):
			continue
		else:
			z2.append(i)
		if(i == 1):
			onepos = count
		
	gcd1 = z2[0]
	for i in z2:
		gcd1 = math.gcd(gcd1, i)

	for i in range(len(z)):
		if(z[i] == gcd1):
			index = i
	ans = 0 
	for j in range(0, index):
		if(z[j]%gcd1 == 0 ):
			ans += 1
	#print(gcd1)
	if(ans > onepos - 1):
		ans = ans 
	else :
		ans = onepos - 1
	print(ans)
    			
	