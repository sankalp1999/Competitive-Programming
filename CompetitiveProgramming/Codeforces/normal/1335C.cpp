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
const int N = (int)2e5 + 1;
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   
   while (t--)
   {
       int n;
       cin >> n;
       int arr[n + 1];
    //    lli  unique = 0;
       unordered_set<int> s;
       for (int i = 0; i < n; i++)
       {
           cin >> arr[i];
            if(s.find(arr[i]) == s.end())
            {
                s.insert(arr[i]);
                // unique++;
            }
       }
    //    cout << "Set size " << s.size() << endl;
       if (n == 1)
       {
           cout << 0 << endl;
           continue;
       }
    //    int max1 = *max_element(arr, arr + n);
       int count[ N ] = {0};
       for (int i = 0; i < n; i++)
       {
           count[arr[i]]++;
       }
       long long int maxcount = 0;
       int pos = 0;
       REP(i, N)
       {
           if(count[i] > maxcount)
           {
               maxcount = count[i];
               pos = i;
           }
       }
    //    cout << "maxcount " << maxcount << " " << arr[pos] << endl;
        if(maxcount == 1)
        {
            cout << 1 << endl;
            continue;
        }
        int sc = s.size();
        if(maxcount < sc)
        {
            cout << maxcount << endl;
        }
        else if(sc == maxcount)
        {
            cout << maxcount - 1 << endl;
        }
        else if(maxcount > sc)
        {
            cout << sc  << endl;
        }
        }
}