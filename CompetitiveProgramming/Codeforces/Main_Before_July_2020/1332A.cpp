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
const double PI = 3.141592653589793238460;

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        lli a, b, c, d;
        cin >> a >> b >> c >> d;
        lli x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        lli fx, fy;
        fx = b - a;
        fx = fx + x;
        fy = d - c;
        fy = fy + y;
        if(a + b >= 1 && x1 == x2)// No horizontal space to move
        {
        	cout << "No" << endl;
        	continue;
        }
        if(c + d >= 1 && y1 == y2)//No vertical space to move
        {
        	cout << "No" << endl;
        	continue;
        }
        if (x1 <= fx && fx <= x2)
        {
            if(y1 <= fy && fy <= y2)
            {
                cout << "Yes" << endl;
                continue;
            }
         
        }
        cout << "No" << endl;
        
    }
}