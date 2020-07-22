''' 
To prove: 1/4TH of the min elements will account for the max divisor count.
sort. then check. We are essentially brute forcing with search space reduction by 
reducing the amount of the area we are searching.
'''

'''

logic : maximize the index and minimize the number
2. reduce the numbers to be divided somehow somehow either 
by sorting or something

'''


import math
t = int(input())

# method to print the divisors 
while (t != 0):
    dict1 = dict()
    
    list2 = []
    n = 0
    n = int(input())
   
    a = [int(i) for i in input().split()]
    init = max(a)
    #counter = [0] * (init+1)
    count =  0
    max1 = 0
    
    a2 = list()
    onepos = 0
    a3 = sorted(a)
    if (len(a) < 5000):
        le = len(a)//2 
        # if list is small, then i need to consider half of the list
    else:
        le = len(a)//1000
        # if list is big, reduce it since we need the first few elements
    for i in range(0, le):
   
      if (a3[i] == 1):
        if i > onepos:
          onepos = i
      else:
          a2.append(a3[i])
    a2 = list(set(a2))
    a2 = sorted(a2, reverse = True)
    #print(a2)

    for i in range(0,len(a2)):
      index = -1 
      count = 0
      for j in range(len(a) - 1, -1, -1):
            if (a[j] == a2[i]):
                index = j
                break
      for k in range(0, index):
          if (a[k] % a2[i] == 0):
              count += 1
     
      if (count > max1):
          max1 = count         
    if onepos > max1:   
      print(onepos )
    else:
      print(max1)

    t -= 1
