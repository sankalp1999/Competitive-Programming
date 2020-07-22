#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define mo 1000000007
#define INF 1e18
#define eps 0.0000000001
#define stp setprecision(20)
#define endl '\n'
using namespace std;
//mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());
int main()
{
    SPEED;
    vi a;
    int n, i ;
    cin >> n ;
    int n2 = n;
    a.push_back(0);
    while(n--)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }
    for (i = 0; i < a.size()-1;i++)
    {
        
        
        
        
        if (a[i+1] - a[i] > 15 )
        {
            cout << a[i] + 15;
            return (0);
        }
        else if (i == a.size() - 2 )
        {
            if (a[i+1] != 90)
            {   if (a[i+1] + 15 <= 90)
                {cout << a[i+1] + 15;
                return (0);}
                else{
                    cout << 90;
                    return 0;
                }
            }
        }
        
        
        
    } 
    cout << 90;
        
    
    return (0);
}