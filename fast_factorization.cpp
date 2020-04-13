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
vector<int> factorize(int n)
{
    vector<int> res;
    for (int i = 2; i * i <= n; ++i)
    {
        while(n%i == 0)
        {
            res.push_back(i);
            n /= i;
        }
    }
    if(n != 1)
    {
        res.push_back(n);
    }
    return res;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   for (int i : factorize(100))
   {
       cout << i << " ";
   }
}