n = int(input())
flag  = 0 
td = []
found = 0 
for i in range(n):
    x = [int(i) for i in input().split()]
    td.append(x)
  
(td.sort())    

for i in range(n-1):
        
            
        
    if(td[i][1] > td[i+1][1]):
        print("Happy Alex")
        found = 1 
        break
if found == 0 :
    print("Poor Alex")