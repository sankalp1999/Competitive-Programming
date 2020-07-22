a = [int(i) for i in input().split()]
x1 = a[0]
y1 = a[1]
x2 = a[2]
y2 = a[3]
# for rook
if(x1 == x2) or (y2 == y1):
    print(1, end = ' ')
elif(x1 != x2 and y2 != y1):
    print(2, end = ' ')
#for bishop
if(x1 + y1 == x2 + y2 or x1-y1 == x2 - y2):
    print(1, end = ' ')
elif (x1 + y1) % 2 != (x2 + y2)%2 :
    print(0, end = ' ')
else:
    print(2)


#for king
print(max(abs(x1 - x2), abs(y1-y2)) , end = ' ')
