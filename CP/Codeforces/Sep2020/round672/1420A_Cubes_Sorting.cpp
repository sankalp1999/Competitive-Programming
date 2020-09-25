/*
This is overcomplicated. I could have just checked
a[i] <= a[i + 1]
That means it is not a decreasing array.
Because only in a decreasing order array, we can have N * ( N -  1) / 2 operations
*/

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
       long long int n;
       cin >> n;
       vector<int> v(n);
       vector<int> temp(n);
       bool oc = false;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           temp[i] = v[i];
       }
       
           int flag = 0;
        
       sort(temp.begin(), temp.end(), greater<int>());
       for (int i = 0; i < n - 1; i++)
       {
           if(temp[i] == temp[i + 1])
           {
               oc = true;
               break;
           }
       }

        for (int i = 0; i < n; i++)
        {
            if (temp[i] != v[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1 || oc == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

   }
}