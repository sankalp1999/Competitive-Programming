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
   int t;
   cin >> t;
   while(t--)
   {
       int n;
       cin >> n;
       vector<int> v;
       for (int i = 0; i < n; i++)
       {
           int temp;
           cin >> temp;
           v.push_back(temp);
       }
        sort(v.begin(), v.end());

        int i = 0;
        int j = v.size() - 1;

        vector<int> ans;
    
        while (ans.size() < v.size())
        {
            // cout << " i And j " << i << " " << j << endl;
            ans.push_back(v[i]);
            i++;
            if (ans.size() == v.size())
                break;
            ans.push_back(v[j]);
            j--;
        }
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
   }

   return 0;
           
   }
   

