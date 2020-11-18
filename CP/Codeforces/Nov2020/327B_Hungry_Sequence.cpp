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

// Alternative clever solution
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long int p = 1000000;
    for (int i = 0; i < n; i++)
    {
        cout << p << " ";
        p++;
    }
    return 0;

}

// int main()
// {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n;
//    cin >> n;
//    bool prime[1299710];
//    const int maxn = 1e7 + 1;
//    memset(prime, true, sizeof(prime));
//    prime[1] = false;
//    for (int i = 2; i * i <= 1299709 ; i++)
//    {
       
//        if(prime[i])
//        {
//            for (int j = i * i; j <= 1299709; j+=i)
//            {
//                prime[j] = false;
//            }
//        }
//    }
//    int count = 0;
//    for (int i = 2; i <= 1299709; i++)
//    {
//        if(prime[i])
//        {
//            cout << i << " ";
//            count++;
//            if(count == n)
//                break;
//        }
//    }

// }