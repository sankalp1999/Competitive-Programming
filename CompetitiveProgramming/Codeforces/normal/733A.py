s = input()
#A', 'E', 'I', 'O', 'U' and 'Y'.
count1 = 0
s = 'A' + s + 'A'
list1 = []
for i in range(len(s)) :
	
	if s[i] in ['A', 'E', 'I', 'O', 'U', 'Y']:
		
		count2 = i
		list1.append(count2-count1)
		count1 = count2
print(max(list1))