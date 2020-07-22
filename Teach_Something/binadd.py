t = int(input())
while(t!=0):
    a = input()
    b = input()
    a[::-1]
    b[::-1]
    while(len(a) < len(b)):
        a += '0'
    while(len(b) < len(a)):
        b += '0'
    a[::-1]
    b[::-1]
    count = 0
    c2 = -1
    for i in range(len(b) -1, -1, -1):
        if(a[i] == '1' and b[i] == '1'):
            i -= 1 
            count = 1
            while(i >= 0):
                if(a[i] == '1' and b[i] == '0'):
                    count += 1
                elif(a[i] == '0' and b[i] == '1'):
                    count+=1
                else:
                    break;
                i -= 1
        c2 = max(count, c2)
    print(c2 + 1)
    t -= 1