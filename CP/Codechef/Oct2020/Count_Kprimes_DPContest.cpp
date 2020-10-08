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

const int x = 1000001;
int prime[x];
void sieve()
{
    prime[1] = 1;
    
    for (int i = 2; i <= x; i++)
    {
        prime[i] = i;
    }

    for (int i = 2; i * i <= x; i++)
    {
        if (prime[i] == i)
        {
            for (int j = i * i; j <= x; j += i)
            {
                if(prime[j] == j)
                prime[j] = i;
            }
        }
    }
}

int factor(lli n)
{
    unordered_set<int> res;
    while (n != 1)
    {
        res.insert(prime[n]);
        n = n / prime[n];
    }
    return res.size();
}

using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   sieve();
   vector<int> res(100001);

   for (int i = 2; i <= 100000; i++)
   {
       res[i] = (factor(i));
   }

   int prefix[100002][7];
   memset(prefix, 0, sizeof(prefix));

   for (int i = 2; i <= 100000; i++)
   {
       prefix[i][res[i]]++;
   }
   for (int i = 3; i <= 100000; i++)
   {
       for (int j = 1; j <= 6; j++)
       {
           prefix[i][j] += prefix[i - 1][j];
       }
   }

    int t;
   cin >> t;
   while(t--)
   {
       lli a, b, k;
       cin >> a >> b >> k;
       cout << prefix[b][k] - prefix[a - 1 ][k] << endl;
   }
}