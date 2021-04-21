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
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--)
   {
       int n, k;
       cin >> n >> k;
       string s;
       cin >> s;
       int visited[n] = {0};
       lli count = 0;
       for (int i = 0; i < n; i++)
       {
           if(s[i] == '.')
               visited[i] = -1;
       }
       for (int i = 0; i < n; i++)
       {
           if(s[i] == '*' && visited[i] == 0)
           {
               visited[i] = 1;
               count++;
               s[i] = 'x';
               break;
           }
       }
       for (int i = n - 1; i >= 0; i--)
       {
           if(s[i] == '*' && visited[i] == 0)
           {
               visited[i] = 1;
               s[i] = 'x';
               count++;
               break;
           }
       }
       for (int i = 0; i < n; i++)
       {
           if(s[i] == 'x')
           {
               int found = 0;
               int last = -1;
               for (int j = i + 1; j <= i + k  && j < n; j++)
               {
                   if(s[j] == 'x')
                    {
                        found = 1;
                        break;
                    }
                    if(s[j] == '*')
                    {
                        last = j;
                    }
               }
               if(found == 0 && last != -1)
               {
                   s[last] = 'x';
                   count++;
                   i = last - 1;
               }
           }
       }
       cout << count << endl;
   }
}