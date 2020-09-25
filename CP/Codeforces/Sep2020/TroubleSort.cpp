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
       vector<int> v(n), type(n);
       vector<int> temp;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           temp.push_back(v[i]);
       }
       sort(temp.begin(), temp.end());
       int count[2] = {0};
       for (int i = 0; i < n; i++)
       {
           cin >> type[i];
           count[type[i]]++;
       }

       if(count[0] > 0 && count[1] > 0)
       {
           cout << "Yes" << endl;
           continue;
       }
       int flag = 0;
       for (int i = 0; i < n; i++)
       {
           if(v[i] == temp[i])
           {
               continue;
           }
           else
           {
               flag = 1;
               break;
           }
       }
       if(flag == 0)
       {
           cout << "Yes" << endl;
       }
        else
        {
            cout << "No" << endl;
        }
    }
}