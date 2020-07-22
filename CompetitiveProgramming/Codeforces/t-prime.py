# Python 3 program To calculate 
# The Value Of nCr 

def nCr(n, r): 

	return (fact(n) / (fact(r) 
				* fact(n - r))) 

# Returns factorial of n 
def fact(n): 

	res = 1
	
	for i in range(2, n+1): 
		res = res * i 
		
	return res 

# Driver code 
n = 5
r = 3
 
for i in range(1,5000):
    r  = i 
    print(int(nCr(n, r)))
# This code is contributed 
# by Smitha 
