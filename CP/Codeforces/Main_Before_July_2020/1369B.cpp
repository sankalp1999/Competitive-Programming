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
       int n;
       cin >> n;
       string s;
       cin >> s;
       int c = 0;
       string temp = "";
       int i;
       for (i = n - 1; i >= 0; i--)
       {
           
           
            if(c == 1)
            {
                if(s[i] == '1')
                    continue;
            }
            if(s[i] == '0')
            {
            c++;
            if(c == 1)
                temp += '0';
            if(c > 1)
                break;
            }
            if(c == 0) // if no zeros keep filling. otherwise stop
                {
                temp += s[i];
                }
        }
        string p = "";
        int z = 0;
        while (i >= 0)
        {
            if(s[i] == '0')
                z++;
            if (z > 0 && s[i] == '1')
            {
                z = 0;
            }
            if(z == 0 && s[i] == '1')
            {
                // do nothing
            }
            i--;
        }
        while(z--)
        {
            p += '0';
        }
        temp += p;

        reverse(temp.begin(), temp.end());
        cout << temp << endl;
        }
           
   }