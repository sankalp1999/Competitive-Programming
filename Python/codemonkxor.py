t = int(input())
array = [int(i) for i in input().split()]
query = int(input())

for i in range(query):
    
    count = 0
    arr = [int(i) for i in input().split()]
    l = arr[0] -1 
    r = arr[1] -1 
    x = array[l]
    for i in range(l,r+1):
        if array[i] == 0 :
            count = count + 1
        if i >= l+ 1:
          
            x = x^array[i]
    
       
    print(x,end = ' ')
    print(count)
