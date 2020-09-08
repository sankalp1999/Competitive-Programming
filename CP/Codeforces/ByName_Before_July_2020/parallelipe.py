input1 = [int(i) for i in input().split()]
lb = input1[0]
bh = input1[1]
lh = input1[2]
l = int(((lb*bh)/lh)**0.5)
b = int(((bh*lh)/lb)**0.5)
h = int(((lh*lb)/bh)**0.5)
ans = 2*(l + b + h)
print(ans)