
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
// int main()
// {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        string s;
//    cin >> s;
//    int parity[2] = {-1, -1};
//    lli count = 0;
//    for (int i = 0; i < s.size(); i++)
//    {
//        int c = s[i] - '0';
//        if(c == 0 or c == 1)
//        {
//            parity[(i % 2) ^ c] = i ; 
//        }
//     //    cout << parity[0] << " " << parity[1] << endl;
//        // If parity changes, then the latest
//        // or the max index is stored.

//        int mn = min(parity[0], parity[1]);
//     //    cout << i - mn << endl;
//        count += i - mn;
//        //    cout << parity[c] << " ";
//    }
//    cout << count << endl;

//    }
   
// }
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
    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(2, 0));
    if(s[0] == '0' or s[0] == '?')
    {
        dp[0][0] = 1;

    }
    if(s[0] == '1' or s[0] == '?')
    {
        dp[0][1] = 1;
    }
    lli sum1, sum2;
    sum1 = 1;
    for (int i = 1; i < n; i++)
    {
        if(s[i] != '0')
        {
            dp[i][1] = dp[i - 1][0] + 1;
        }
        if(s[i] != '1')
        {
            dp[i][0] = dp[i - 1][1] + 1;
        }
        sum1 += max(dp[i][0], dp[i][1]);
        // sum2 += dp[i][0];
    }
    cout << sum1  << endl;
}
}