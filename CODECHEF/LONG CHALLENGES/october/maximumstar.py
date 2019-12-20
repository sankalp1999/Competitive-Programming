'''
I think i can manually traverse and find the element with the largest difference
between the index and the v alue and then 
but i need to prove that it will work 
logic : maximize the index and minimize the number

'''

# 4 8 2 7 10
import math
t = int(input())

# method to print the divisors 

def printDivisors(n) : 
      
    # Note that this loop runs till square root 
    i = 1
    while i <= math.sqrt(n): 
          
        if (n % i == 0) : 
              
            # If divisors are equal, print only one 
            if (n / i == i) : 
                counter[i] += 1
            else : 
                # Otherwise print both 
                counter[i] += 1
                counter[n//i] += 1
        i = i + 1


while (t != 0):
    dict1 = dict()
    
    list2 = []
    n = 0
    n = int(input())
   
    a = [int(i) for i in input().split()]
    init = max(a)
    counter = [0] * (init+1)
    count =  0
    max1 = 0
    dp = [0]*len(a)
    
    a2 = list()
    onepos = 0 
    for i in range(1, len(a)):
   
      if (a[i] == 1):
        if i > onepos:
          onepos = i
      else:
        printDivisors(a[i])

    sortme = []
   
    for i in range(len(counter)):
      if(counter[i] > 1):
        sortme.append([counter[i], i])
   
    sortme = sorted(sortme, reverse=True)

    max1 = 0
    #print(sortme)
    for i in range(0,len(sortme)):
      index = -1 
      count = 0
      if (sortme[i][1] == 1):
        continue

      for j in range(len(a) - 1, 0, -1):
        if (a[j] == sortme[i][1]):
          index = j
          break
      if (index != -1):
        for k in range(0, index):
          if (a[k] % sortme[i][1] == 0):
            count += 1
        
      
        if (count > max1):
          max1 = count
      #if index != 1:
       # break
    if onepos > max1:
      print(onepos )
    else:
      print(max1)

    t -= 1