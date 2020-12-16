#include<bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
#define gcd __gcd
const double PI = 3.141592653589793238460;

using namespace std;


void solve()
{
    lli n;
    cin >> n;

    unordered_map<lli, lli> m;
    lli remaining = n;
    lli max_occur = 0;
    lli factor = 0;
    for (lli i = 2; i * i <= n; i++)
    {
        while(remaining % i == 0)
        {
            remaining = remaining / i;
            m[i]++;
            if(m[i] > max_occur)
            {
                max_occur = m[i];
                factor = i;
            }
        }int 
    }
    
    if(max_occur <= 1)
    {
        cout << 1 << endl;
        cout << n << endl;
        return; // Prime number
    }

    vector<lli> res;
    for (int i = 0; i < max_occur; i++)
    {
        res.push_back(factor);
    }

    // cout << "Factor :" << factor << endl;   

    for(auto it : m)
    {
       if(it.first != factor)
       {
           int j = res.size() - 1;
           lli k = it.second;
           
           while (k--)
           {
               res[j] = res[j] * it.first;
               j--;
           }
       }
    }
    res.back() *= remaining;
    cout << res.size() << endl;
    for(auto a : res)
    {
        cout << a << " ";
    }
    cout << endl;
    
 
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--)
   {
       solve();
   }
   
}