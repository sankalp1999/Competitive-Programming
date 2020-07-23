a = [int(i) for i in input().split()]
n = a[0]
k = int(a[1])
s = input()
i1 = 0
i2 = 0
dc = 0
hc = 0

for i in range(len(s)) :
    if s[i] == 'G':
        i1 = i
    elif s[i] == 'T':
        i2 = i
    elif s[i] == '.':
        dc += 1
    elif s[i] == '#':
        hc += 1
flag  = 0
done = 0
if len(s)-2 == dc and k == 1 :

    print("YES")
    raise SystemExit(0)
elif i2 - i1 == k :

    print("YES")
    raise SystemExit(0)
if i1 < i2 :
    for i in range(i1,i2+1,k):
        if s[i] == '#':
            print("NO")
            raise SystemExit(0)
            break
        elif s[i] == 'T':
            flag = 0
            print("YES")
            raise SystemExit(0)
        elif s[i] == '.' :
            continue
        else :
            flag = 1
            
elif i1 > i2 :
    for i in range(i2,i1+1,k):
        if s[i] == '#':
            flag = 1
            print("NO")
            raise SystemExit(0)
        elif s[i] == 'G':
            flag = 0
            print("YES")
            raise SystemExit(0)
        elif s[i] == '.':
            continue
        else :
            flag = 1
if flag == 1 :
    print("NO")