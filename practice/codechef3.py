t = int(input())
while(t!=0):
    n = 0
    k = 0
    list1 = [int(i) for i in input().split()]
    n = list1[0]
    k = list1[1]
    arr = [int(i) for i in input().split()]
    list2 = list(arr)
    count = 0
    list3 = []
    list4 = []
    dp = list()
    flag = 0
    if n%2==1 :
        limit = (n-1)//2 + 3*n
        for i in range( limit ):
            a = arr[i%n]
            b = arr[n- i%n - 1]
            arr[i%n] = a^b
            arr2 = [int(i) for i in arr]
          
            if(i == (n-1)//2):
                list3 = list(arr)
                count = 1
                flag = 1
            if(flag == 1):
                dp.append(arr2)
            else:
                list4.append(arr2)
        print(len(list4), (n-1)//2)
       # print(list4)
        if(k-1 < len(list4)):
            print(list4[k-1])
           
        else:
            index = k-1
            print(len(dp))
            print(dp[index%len(dp)])
    else:
        limit = 3*n
        for i in range( limit ):
            a = arr[i%n]
            b = arr[n- i%n - 1]
            arr[i%n] = a^b
            arr2 = [int(i) for i in arr]
            dp.append(arr2)
        print(dp[(k-1)%limit])           
 
    t -= 1