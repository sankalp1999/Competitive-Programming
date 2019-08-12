def solve(n, r):
    fact =1 
    fact1 = 1 
    fact2 = 1 
    n = n%142857
    r = r%142857
    for i in range(1,n+1):
        fact = fact*i
    print(fact)
    for i in range(1,r+1):
        fact1 = fact1*i
    for i in range(1,n-r+1):
        fact2= fact2*i
    ncr = fact//(fact2*fact1)
    return ncr             
print(solve(10,3))