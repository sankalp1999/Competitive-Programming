#python3
l = int(input()) # l is the distance
diff = int(input())
n = int(input())
def ref(x,n,l):
    nr = 0 #numrefill
    cr = 0 
    while cr <= n :
        lastre = cr
#        print(lastre)
        while(cr <= n and (x[cr + 1]-x[lastre]<=l)):
            cr = cr + 1 
#        print("alsfsal",nr)
        if cr == lastre:
            return -1 
        if cr <=n :
            nr = nr + 1
    return nr
stops = [int(i) for i in input().split()]
stops = [0] + stops + [l]
#print("ksjgkd",stops)

print(ref(stops,n,diff))        
    