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
   long long int n;
   cin >> n;

   string s;
   cin >> s;
   vector<int> v;
   for (int i = 0; i < s.size(); i++)
   {
       int num = s[i] - '0';
       if (num == 0 || num == 1)
           continue;

       if(num == 4)
       {
           v.push_back(3);
           v.push_back(2);
           v.push_back(2);
       }
       else if(num == 6)
       {
           // 6 * 5! 
           // 3 * 2 * 5 * 4 * 3 * 2
           // 6! = 3! * 5!
           v.push_back(3);
           v.push_back(5);
       }
       else if(num == 8)
       {
           // 8! = 8 * 7!
           // = 2! * 2! * 2! * 7!
           v.push_back(2);
           v.push_back(2);
           v.push_back(2);
           v.push_back(7);
       }
       else if(num == 9)
       {
           // 9! = 9 * 8!
           // 3 * 3 * 8!
           // 3 * 3 * 2 * 2 * 2 * 7!
           // 3! 3! 2! 7!
           v.push_back(3);
           v.push_back(3);
           v.push_back(2);
           v.push_back(7);
       }
       else
       {
           v.push_back(num);
       }
   }
   sort(v.begin(), v.end(), greater<int>());
   for(int i  : v)
   {
       cout << i;
   }
   cout << endl;
}