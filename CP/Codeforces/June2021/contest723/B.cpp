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


unordered_set<int> s;
void solve(int num, lli arr[], bool &flag)
{
    
    if(s.find(num) != s.end()){
        return;
    }
    if (num == 0)
    {
        flag = true;
        return ;
    }
    
    s.insert(num);
    
    for (int i = 0; i < 8; i++)
    {   
        if(num - arr[i] >= 0)
        solve(num - arr[i], arr, flag);
    }
}




int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   // Preprocessing
   lli arr[] = {11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};
   
    int t;
    cin >> t;
    while(t--)
   {
       int n;
       cin >> n;
       s.clear();
       bool flag = false;
       solve(n, arr, flag);
       if (flag)
       {
           cout << "YES" << endl;
       }
       else
           cout << "NO" << endl;
   }
}

