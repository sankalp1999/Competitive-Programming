subset = []

def search(k, n ):
    global subset
    if k == n:
        print(subset)
    else:
        search(k+1, n)
        subset.append(k)
        search(k+1, n)
        subset.pop()
search(0, 10)