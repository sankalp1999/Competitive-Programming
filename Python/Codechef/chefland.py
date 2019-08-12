t = int(input())
for i in range(t):
    k = int(input())
    a = 10**k - 1
    count = 0 
    for i in range(0,10**k):
        j = 10**k - i -1 
    
        if len(set(str(i))) == 1 and len(set(str(j))) == 1 :
            count = count + 1 
            print(i,j)
        elif set(str(i)) == set(str(j)) and len(set(str(i))) == 2   :
            
            count = count + 1
            print(i,j)
    print(count)            
    