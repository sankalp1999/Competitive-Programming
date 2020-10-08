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
   for (int i = 0; i < n; i++)
   {
       cin >> v[i];
   }

   unordered_map<lli, lli> m;

   lli rs = 0;
   lli count = 0;
   m[0] = 1;
   for (int i = 0; i < n; i++)
   {
       rs += v[i];
       cout << rs << " ";
       if (m.find(rs) != m.end())
       {
           count++;
           m.clear(); // Previou prefix sums won't affect now
           m[0] += 1;
           rs = v[i]; // 0 is needed.
                      //    rs = v[i]; // Reset because we added infinity before this
           // Adding the huge number will help to avoid
           // previou array elements but things will be
           // same for next few elements since everybody is added.
           // with that number
       }

       m[rs] += 1;
   }
   cout << endl;

   cout << count   << endl;
}

// 7
// 1 1 2 -3 5 6  -6

/*
7
1 1 2 -3 5 6  -6           
          This                    This 
1 2 4 1 1000000006 1000000012 1000000006 
2
*/
