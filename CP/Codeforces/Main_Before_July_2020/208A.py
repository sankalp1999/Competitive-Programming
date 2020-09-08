string = input()
x = string.split("WUB")
a = []
for i in x :
    if i != '' :
        a.append(i)
print(*a)