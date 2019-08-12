n = int(input())
result = ""
count = n -1  
if n== 1:
    result = "I hate it"
while(count!=0 ):
    result= result + "I hate that "
    count = count - 1
    if count == 0 :
        break 
    result = result + "I love that "
    count = count - 1
    if count == 0 :
        break 
if n%2 ==0 :
    result =result + "I love it"
if n%2 == 1 and n!= 1 :
    result = result + "I hate it"
print(result)            
            
        
        
        