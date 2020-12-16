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
       stack<char> open;
       stack<char> close;
       int count = 0;
       for (int i = 0; i < (int)s.size(); i++)
       {
           if(s[i] == '[')
           {
               close.push(s[i]);
           }
           if(s[i] == '(')
           {
               open.push(s[i]);
           }
           if(s[i] == ')' && !open.empty() && open.top() == '(')
           {
               open.pop();
               count++;
           }
           if(s[i] == ']' && !close.empty() && close.top() == '[')
           {
               close.pop();
               count++;
           }
       }
       cout << count << endl;
   }
}