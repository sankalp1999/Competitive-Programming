#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
long long int sum1 = 0 ;
long long int ans = 0;

map<long long int, long long int>results;

long long int coin(long long int t)
{
    if(t == 0)
    {
        return 0;
    }
    if(results.find(t)  != results.end())
    {
        return results[t];
    }
    
    else
    {
        sum1 = max(t, coin(t / 2) + coin(t / 3) + coin(t / 4));
        auto it = results.find(t);
        if(it == results.end())
        {
            results[t] = sum1;
        }
    }
    return sum1;
}
int main()
{

    int t;
    while(cin >> t)
    {
        long long int coins = t;
        sum1 = coin(t);
        cout << sum1 << endl;
    }

    return 0;
}