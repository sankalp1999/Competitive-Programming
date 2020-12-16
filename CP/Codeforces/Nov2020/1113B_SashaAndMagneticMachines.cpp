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
    vector<int> v(n);
    int min_n = 101;


    // Mistake not knowing that I could do 
    // brute force in this question after selecting minimum

    lli sum = 0;
    int min_p;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] < min_n)
        {
            min_n = v[i];
            min_p = i;
        }
        sum += v[i];
    }

    int res = sum;
    for (int i = 0; i < n; i++)
    {
        if(i == min_p)
        {
            continue;
        }
        for (int j = 1; j <= v[i] ;j++)
        {
            if(v[i]%j==0)
            {  
                
                int temp = (v[min_p] * j )+ (v[i] / j);
                res = min((long long)res, sum - v[min_p] - v[i] + temp);
            }
        }
    }
    cout << res << endl;
}