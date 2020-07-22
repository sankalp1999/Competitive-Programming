n = int(input())
s = input()
s2 = input()
sum1 = 0 
for i in range(len(s)):
	if(abs(int(s[i]) - int(s2[i])) <= 5):
		sum1 += abs(int(s[i]) - int(s2[i]))
	else:
		sum1 += min(int(s[i]), int(s2[i])) + 10 - max(int(s[i]), int(s2[i]))
 
print(sum1)