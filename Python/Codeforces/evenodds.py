x = [int(i) for i in input().split()]
a = x[0]
b = x[1]
l = []
for i in range(1, a + 1, 2):
    l.append(i)
for i in range(2, a + 1, 2):
    l.append(i)
print(l[b])    

    