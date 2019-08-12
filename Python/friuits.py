z = [int(i) for i in input().split()]
a= z[0]
b = z[1]
l = int(input())# The length of an array
x = [int(i) for i in input().split()]
sum1 = 0
sum2 = 0 
l1 = []
l2 = []
for i in range(l):
    l1.append(a+x[i])
    l2.append(b+x[i])

x2 = set(l1)
x3 = set(l2)    
y = list(x2.intersection(x3))
print(y)

i1 = l1.index(y[0])
i2 = l2.index(y[0])
print(x[i2],x[i1])

   
