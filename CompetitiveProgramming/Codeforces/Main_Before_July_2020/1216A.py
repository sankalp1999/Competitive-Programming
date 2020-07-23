a = int(input())
s = list(input())
list1 = [0,0]

#for i in s :
#	if i == 'a': 
#		list1[0] += 1
#	elif i == 'b':
#		list1[1] += 1 
#n1 = list1[0]
#n2 = list1[1]
#count = 0 
#print(n1,n2)
#while(n1 != n2):
#	count = count + 1
#	if(n1 > n2 ):
#		n1 -= 1 
#		n2 += 1
#	else:
#		n1 += 1
#		n2 -= 1
#print(count)
count  =  0 
for i in range(1,len(s), 2):
    if(s[i-1] == 'a' and s[i] == 'a'):
        count = count + 1 
        s[i-1] = 'b' 
    elif(s[i-1] == 'b' and s[i] == 'b') :    
        count = count + 1
        s[i-1] = 'a' 
    else :
        continue
p = ""
print(count)
for i in s :
    p = p + i 
print(p)