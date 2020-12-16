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

int p[100010];
int size[100010];

int get(int a)
{
    while(a != p[a])
    {
        a = p[a];
    }
    return a;
}


/*  log N */
void union1( int a, int b)
{
    a = get(a);
    b = get(b);
    if(size[a] > size[b])
    {
        swap(a, b);
    }
    p[a] = b;
    if(a!=b)// this means they are in same set already
    size[b] += size[a];
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n, m;
   cin >> n >> m;
   for (int i = 0; i <= 1e5; i++)
   {
       p[i] = i;
       size[i] = 1;
   }
       while (m--)
       {
           string s;
           int a, b;
           cin >> s >> a >> b;
           if (s == "union")
           {
               union1(a, b);
           }
           else
           {
               int p = get(a);
               int p2 = get(b);
               if (p == p2)
               {
                   cout << "YES" << endl;
               }
               else
               {
                   cout << "NO" << endl;
               }
           }
       }
}