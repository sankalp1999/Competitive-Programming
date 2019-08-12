n = int(input())
list1 = list()
for i in range(n):
    list1.append(int(input()))
        
min1 = min(list1) # max element
max1 = max(list1)
d = max1 - min1 
list2 = list()
for i in range(2,d+1):
    if d%i == 0:
        list2.append(i)
flag = 1 
ans = list()
j = 0 
for i in list2 :

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
            
        
     
    
