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
    vector<int> arr(n);
    vector<int> match(n);

    // MEasure the right rotation by literally matching

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        match[i] = arr[i];
    }
    sort(match.begin(), match.end());
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[0] == match[i])
        {
            pos = i;
            break;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if(match[(pos + i)%n] != arr[i])
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << pos << endl;
}