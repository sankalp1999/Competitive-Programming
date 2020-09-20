/*
AC in one go!
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
   int n;
   cin >> n;
   vector<int> v(n, 0);
   int max_element = 0;
   unordered_set<int> s;
   int flag = 0;
   int pos = -1;
   for (int i = 0; i < n; i++)
   {
       cin >> v[i];
       if(s.find(v[i]) == s.end()){
       s.insert(v[i]);
       }
       else
       {
           flag = 1;
           break;
       }
       if(v[i] > max_element)
       {
           max_element = v[i];
           pos = i;
       }
   }
   int count = 0;

    if(flag == 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    int res = 0;
    for (int i = 0; i < pos; i++)
    {
        if(v[i] < v[i+1])
            continue;
        else
            res = 1;
    }
    for (int i = pos; i < n - 1; i++)
    {
        if(v[i] > v[i + 1])
        {
            continue;
        }
        else
        {
            res = 1;
        }
    }
    if(res == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}