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
   int n, m;
   cin >> n >> m;
   
   // sort
   // max n to decide bool array size
   // choose the minimum ones.
   int arr[n];
    REP(i, n)
       cin >> arr[i];
    sort(arr, arr + n);

    int k = 0;
    vector<int> v;
    for (int i = 1;; i++)
    {

        if(arr[k] == i && k < n)
        {
            k++;
        }
        else
        {
            if (m - i < 0)
                break;
            m -= i;
            v.push_back(i);
        }
        
        
    }
    cout << v.size() << endl;
    for(int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
