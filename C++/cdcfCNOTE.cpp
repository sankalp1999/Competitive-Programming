#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main()
{   ll t ;
    cin >> t ;

    ll x, y ;

    ll k, n  ;


    while(t--)
    {
    int flag = 0 ;

    cin >> x >> y >> k >> n ;
    ll pgreq = x - y ;
    vector<long long int> pi;
    vector<long long int> ci;
    while(n--)
    {
        ll tpi, tci;
        cin >> tpi >> tci;
        pi.push_back(tpi);
        ci.push_back(tci);

    }
     for(int i = 0 ; i <  pi.size();i++)
    {
        cout << ci[i] << " "  ;


        }
    for(int i = 0 ; i <  pi.size();i++)
    {
        if (pi[i] >= pgreq  )
        {
            if (k >= ci[i])
            {
                flag= 1 ;
                cout <<"look here "<<  ci[i] << k << endl;
                break ;
            }
        }


        }
                if (flag == 1)
        {cout << "LuckyChef" << endl ;

        flag = 0 ;}

        else if (flag == 0 )
        {cout << "UnluckyChef" << endl;}
      }
return (0);
    }



