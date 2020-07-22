'''Number of arrangements of the number which are greater than it. 
   Practice to think, generalise, make a formula, recurrence etc. Try to fit them in a programming 
   construct like a for loop or recursive nature.'''

# precompute the factorials till 10^9 
# here, we calculate the number of numbers greater than ith digit. That would result in 
#  big*factorial(n - l) where l is the length of the number. l - i is the remaining digits.

n = input()
l = len(n)
facts = [1]
f = 1	
for i in range(1, 11):
	f = f*i
	facts.append(f)
sum1 = 0
ans = 0
print(facts)
for i in range(0, l-1 ):
	big = 0
	for j in range(i+1, l):
		if( int(n[j]) > int(n[i])):
			big += 1
  # l - i - 1 for zero based indexing    
	ans += facts[l- i -1 ]*big
print(ans)
		
