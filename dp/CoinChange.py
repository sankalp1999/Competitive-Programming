#python3
count = 0
memo = dict()
def change(money, coins):
    global count
    # if (money in memo):
        # count += 1
        # return memo[money]

    if (money == 0):
  
        count+= 1
        return 0
 
    MinNumCoins = 100000000

    for i in range(len(coins) ):
        if money >= coins[i]:
            # list1.append(money - coins[i])
            NumCoins = change(money - coins[i], coins)
            # memo[money - coins[i]] = NumCoins
            # print("Coin : {}".format(coins[i]), end = ' ')
            if (NumCoins + 1 < MinNumCoins):
                MinNumCoins = NumCoins + 1
    
    return MinNumCoins
def dp_change(money, coins):
    """ int, 1-D array -> int"""
    MinNumCoins = [1000000000] * (money+1)
    MinNumCoins[0] = 0 
    for m in range(1,len(MinNumCoins) ):
        MinNumCoins[m] = 1000000000
        for i in range(len(coins)):
            if m  >= coins[i]:
                NumCoins = MinNumCoins[m - coins[i]]+1
                if (NumCoins) < MinNumCoins[m]:
                    MinNumCoins[m] = NumCoins
    print(MinNumCoins)
    return MinNumCoins[money]

if __name__ == "__main__":
    n = int(input())
    a = change(n, [2,5,3,6])
    print(dp_change(n, [2,5,3, 6]))
    # print(count)
    print(a)
    print(count)