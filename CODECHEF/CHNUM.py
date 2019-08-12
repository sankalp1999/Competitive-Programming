t = int(input())
def CHNUM():
    min1 = 0 
    n = int(input())
    x = [int(i) for i in input().split()]
    l1 = []
    l2 = []
    l3 = []
    l4 = []
    for i in x :
        if i > 0 : # min 
            l1.append(i)
        elif i < 0 :
            l2.append(i)
    for i in x :
        if i >= 0 : #max 
            l3.append(i)
        elif i< 0 :
            l4.append(i)
    
    # max is l3 or l4 depending on 
    z1 = len(l1)
    z2 = len(l2)
    z3 = len(l3)
    z4 = len(l4)
    if z2 == 0 :
        max1 = max(z1,z3)
        min1 = min(z1,z3)
    if z2 > 0 :
        max1 = max(z1,z3,z2,z4)
        min1 = min(z1,z3,z2,z4)
        
    print(max1,min1)    
    
for i in range(t):
    CHNUM()    