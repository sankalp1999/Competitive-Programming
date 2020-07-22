#include <cstdio>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>
#include <vector>
using namespace std;
typedef long long int ll; 
long long int gcd(long long int a, long long int b )
{
    if (a == 0){
        return b;
    }
    return gcd(b % a, a);
}

int main()
{
    ll t, i ;
    cin >> t;
    ll flag = 1;
    while (t--)
    {
        vector<long long int> v; 
        ll n;
        cin >> n;
        while(n--)
        {
            ll temp;
            cin >> temp;
            v.push_back(temp);

        }
        sort(v.begin(), v.end());
        ll a, b;
        b = -1;
        a = v[0];
        auto iter = v.begin();
        for (iter; iter != v.end(); iter++)
        {
            if (*iter != a)
            {
                b = *iter;
                
                break;
            }
        }
    //    cout << b << "here " << endl;
        ll ans = gcd(a, b);
        if (b == -1 )
        {
            ll ans0 = 2 * v[0];
           // cout << "i am here inside ";
            cout << ans0 << endl;
            return 0;
        }
        iter = v.end() - 1;
        auto it3 = iter;
        for (iter; *iter == *it3 ; iter--)
        {
            v.pop_back();
        }
        

        for (iter; iter != v.end() - 1; iter++)
        {
            if (*iter%ans == 0)
            {
                continue;
            }
            else
            {
                ans = 1 ;
                break;
            }
        }
        
           
        
        ll result = ans + *it3;
        cout << result << endl;

    }
    return 0; 
}