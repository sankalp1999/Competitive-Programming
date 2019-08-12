n = int(input())
list1 = list()
for i in range(n):
    list1.append(int(input()))
        
max1 = min(list1) # max element
flag = 1 
ans = list()
for i in range(2,max1) :

    flag = 1 
    k = j%i
    for j in list1:
        
        k2 = j % i
        if (k2 == k):
#                print("yes")
            continue 
        else :
#                print("NO")
            flag = 0
            break 
    if (flag == 1 ):
        ans.append(i)
print(*ans)            
            
        
     
    
