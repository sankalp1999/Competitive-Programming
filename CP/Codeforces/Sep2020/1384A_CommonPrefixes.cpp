/*
Completely messed up in this problem. I don't know whether I will be able to improve or not. ;|
*/



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
       vector<int> v(n +  1, 0);
    
       for (int i = 1; i <= n; i++)
       {
           cin >> v[i];
       }
       string s = "";
       int max_ele = *max_element(v.begin(), v.end());
    //    cout << endl;
       for (int i = 0; i <= max_ele; i++) // Have a fixed s tring
       {
           s += 'a';
       }
       string temp = s;
       cout << s << endl;
       for (int i = 1; i < v.size(); i++)
       {
           int curr = v[i];
           temp[curr] = temp[curr] == 'a' ? 'b' : 'a'; // Flip the v[i]th character. So, before that everything is same.
           cout << temp << endl;
       }
       
   }
}
