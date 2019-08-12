s = input()
s2 = input()
list1 = [0]*26

for i in s:
    list1[ord(i)-97] = list1[ord(i)-97] + 1 
print(list1)
for i in s2:
    list1[ord(i)-97] = list1[ord(i)-97] -1 
print(list1)
print(sum(map(abs,list1))  )   