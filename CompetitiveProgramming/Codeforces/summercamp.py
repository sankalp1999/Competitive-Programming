from collections import Counter
n = int(input())
list1 = list()
d = dict()
while(n!=0):
    s = input()
    s = list(s)
    s.sort()
    list1.append(s)
    n -=1 
mi = 0
count =1 
for i in range(len(list1)):
    if list1[mi] == list1[i]:
        count = count + 1
    else:
        count = count -1 
    if count == 0:
        mi = i
        count = 1 
ans = list1.count(list1[mi])
print(ans)        