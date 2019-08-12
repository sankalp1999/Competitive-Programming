n = int(input())
def a():
    x = [int(i) for i in input().split()]
    x1 = []
    x2 = []
    for i in range(2 * n):
        if i < n:
            x1.append(x[i])
        else:
            x2.append(x[i])
    if sum(x1) != sum(x2):
        ans = x2 + x1
        return ans    
    for i in range(n):
        if sum(x1) == sum(x2):
            if x1[i] != x2[i]:
                t = x1[i]
                x1[i] = x2[i]
                x2[i] = t 
                if sum(x1) != sum(x2):
                    break
    
    if(sum(x1) == sum(x2)):
        
        return [-1]
    else :
        ans = x1 + x2
        return ans            
ans1 = a()
print(*ans1)                        
