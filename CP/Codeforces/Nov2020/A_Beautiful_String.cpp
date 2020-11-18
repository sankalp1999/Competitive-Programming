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
       string s;
       cin >> s;
       if(s[0] == '?')
       {
           if(s.size() > 1)
           {
               if(s[1] == 'b' || s[1] == 'c')
               {
                   s[0] = 'a';
               }
               else 
               {
                   s[0] = 'c';
               }
            }else
            {
                s[0] = 'a';
            }
        }
       int n = s.size();
       for (int i = 1; i < n - 1; i++)
       {
           if(s[i] == '?' && s[i + 1] != '?')
           {
               
               
               
               
               
               
               if(s[i - 1] == 'a' && s[i + 1] == 'b')
               {
                   s[i] = 'c';
               }
               else if(s[i - 1] == 'b' && s[i + 1] == 'a')
               {
                   s[i] = 'c';
               }
               else if(s[i - 1] == 'c' && s[i + 1] == 'b')
               {
                   s[i] = 'a';
               }
               else if(s[i - 1] == 'b' && s[i + 1] == 'c')
               {
                   s[i] = 'a';
               }
               else if(s[i-1] == s[i+1])
               {
                   if(s[i-1] == 'a')
                       s[i] = 'b';
                   else if(s[i-1] == 'b')
                       s[i] = 'c';
                   else
                   {
                       s[i] = 'a';
                   }
                }
                else
                {
                    s[i] = 'b';
                }
                        }
            else if(s[i] == '?' && s[i + 1] == '?')
            {
                if (s[i - 1] == 'a')
                {
                    s[i] = 'b';
                }
                else if(s[i - 1] == 'b')
                {
                    s[i] = 'c';
                }
                else if(s[i - 1] == 'c')
                {
                    s[i] = 'a';
                }
            }
       }

       if (n >= 2)
       {
            if(s[n-1] == '?')
            {
                if(s[n-2] == 'a')
                {
                    s[n - 1] = 'b';
                }
                else if(s[n-2]=='b'){
                    s[n - 1] = 'c';
                }
                else
                {
                    s[n - 1] = 'a';
                }
            }
       }
       int flag = 0;
       for (int i = 0; i < n - 1; i++)
       {
           if(s[i] == s[i + 1])
           {
               cout << -1 << endl;
               flag = 1;
               break;
           }
       }
       if(flag == 1)
       {
           continue;
       }
       cout << s << endl;
   }
}