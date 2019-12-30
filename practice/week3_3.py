#python3
d = int(input())
diff = int(input()) # the max distance that can be travelled
n = int(input())
result = 2 
stops = [int(i) for i in input().split()]
stops.append(d);
stops = [0] + stops

#print(stops)
if (diff>d):
    result = 0
for i in range(0,n):
    if (stops[i+1]-stops[i] > diff):
        result = -1
        
if result != -1 and result != 0:        
    pointer = 0
    i = 0 
    j = 0 
    start = stops[i] 
    ans = 0 
    
    while(i != n):
        if (stops[i] - start < diff and start <= n ):
#            print("hello",stops[i] -start)
            start = stops[i+1] 
#            print("yoyo")
        elif(stops[i] - start > diff):
            start = stops[i-1]
            ans = ans + 1
        elif (stops[i] - start == diff):
            start = stops[i]
            ans = ans + 1
            
    print(ans)        
elif result == 0 :
    print(result)
elif (result == -1) :  
    print(result)        
        
    
        
            
    
    