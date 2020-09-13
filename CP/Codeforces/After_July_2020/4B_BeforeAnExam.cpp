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
   
    int d, sumtime;
    cin >> d >> sumtime;
    
    vector<pair<int,int>> times;
    int min_time = 0;
    int max_time = 0;
    for(int i = 0; i < d; i++)
    {
        int a, b;
        cin >> a >> b;
        min_time += a;
        max_time += b;
        times.push_back({a,b});
    }
    if(min_time > sumtime || max_time < sumtime)
    {
        cout << "NO" << endl;
        return 0;
    }

    int extra = max_time - sumtime;
    
    cout << "YES" << endl;
    for(int i = 0; i < d; i++)
    {
        int first, second;
        first = times[i].first;
        second = times[i].second;

        while(extra && second > first)
        {
            second--;
            extra--;
        }
        cout << second << " ";
    }
    cout << endl;
   
}