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
    lli x0, y0, ax, ay, bx, by;
    cin >> x0 >> y0 >> ax >> ay >> bx >> by;

    lli xs, ys, t;
    cin >> xs >> ys >> t;
    vector<pair<lli, lli>> v;
    v.push_back({x0, y0});

    lli newa = x0 * ax + bx;
    lli newb = y0 * ay + by;
    // I am not sure but probably the limit of long long int
    lli limit =(1LL << 62) - 1;


    // Be precise with the bounds
    while (newa <= (limit-bx)/ax &&newb <= (limit-by)/ay) // Log2(t)
    {
        v.push_back({newa, newb});
        x0 = v.back().first;
        y0 = v.back().second;
        newa = x0 * ax + bx;
        newb = y0 * ay + by;
    }
    int max_count = 0;
    int n = v.size();

    // Select a contigous segment. L ..S.. R
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n ; j++)
        {
            // Considering the whole segment
            lli length = abs(v[j].first - v[i].first) + abs(v[j].second - v[i].second);

            // Considering xs,ys as the Right point
            lli distleft = abs(xs - v[i].first) + abs(ys - v[i].second);
            
            // Considering xs,ys as the left boundary
            lli distright = abs(xs - v[j].first) + abs(ys - v[j].second);
            
            if(length <= t - distleft || length <= t- distright)
            {
                max_count = max(max_count, j - i + 1);
            }
        }
    }
    
    cout << max_count << endl;
}
