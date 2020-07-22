def exec():
    n = int(input())
    a = list(input())
    b = list(input())
    if(a == b):
        print(0)
        return 
    
    c = ''.join(sorted(list(a)))
    d = ''.join(sorted(list(b)))
    if c != d:
        print(-1)
        return
        
    sequence = []
    for i in range(n):
    	if(a[i] == b[i]):
    		continue
    
    	# if not equal, then we search for that and swap till it does not 
    	# reach its position 
    	pos = 0 
    	for j in range(i+1, n):
    		
    		if(b[j] == a[i]):
    			pos = j - 1
    			
    	while(b[i]!=a[i]):
    		sequence.append(pos+1)
    		b[pos], b[pos+1]= b[pos+1], b[pos]
    		pos -= 1
#    print(a, b)
    print(len(sequence))
    print(*sequence)
exec()