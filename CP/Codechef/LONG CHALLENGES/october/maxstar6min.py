'''
I think i can manually traverse and find the element with the largest difference
between the index and the v alue and then 
but i need to prove that it will work 
logic : maximize the index and minimize the number
2. reduce the numbers to be divided somehow somehow either 
by sorting or something

'''

# 4 8 2 7 10
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
    else:
        le = len(a)//1000
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