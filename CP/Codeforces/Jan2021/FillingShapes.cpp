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
//    int n;
//    cin >> n;

//    if( n % 2 == 0)
//    {
//        cout << (long long int)pow(2, n / 2) << endl;
//    }
//    else
//    {
//        cout << 0 << endl;
//    }
// }


/*

In this solution, 
F(n) = fill current 2 rows with tile in 1 way * (F ( n - 2 )) + Fill current 2 
rows in another way * (F ( n - 2 ) ) 

*/


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long int dp[100];
    dp[0] = 1;
    dp[1] = 0;
    for (int i = 2; i <= 60; i++)
    {
        dp[i] = dp[i - 2] + dp[i - 2];
    }
    cout << dp[n] << endl;
}