x = input()
a = x.split('+')
a.sort()
k = ""
for i in a :
    k = k + "+" + str(i)
print(k[1:])