n = int(input())
list1 = [int(i) for i in input().split()]
list2 = []
for i in range(0,len(list1) ):
    list2.append([list1[i], i+1])

l2 = sorted(list2, reverse = True)
#print(l2)
count = 0
for i in range(0,len(l2)):
    count  = count + (l2[i][0] * (i)) + 1
print(count)
for i in range(len(l2)):
    print(l2[i][1], end = ' ')