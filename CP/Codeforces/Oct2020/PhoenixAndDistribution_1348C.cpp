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
       int n, k;
       cin >> n >> k;
       string s;
       cin >> s;
       sort(s.begin(), s.end());


       // We want to have lexigraphically letter max towards the end
       // ae > abcde

       // For constructive algo questions, break down into cases to "Construct"

       // HEre, k strings are to be made.
       
       // After sorting
       // Case 1, if there are the first k chars are same, that means we equally distribute 
       // the higher size chars

      // Case 2 otherwise if s[0] != s[k- 1], that means the kth element is lexicographically
      // larger and appending something to it will make it larger. So, this char is the 
      // minimal max lexico string as we will add the other larger chars behind smaller chars
      if(k == 1)
      {
          cout << s << endl;
          continue;
      }

      if(s[0] != s[k - 1])
      {
        
          cout << s[k - 1] << endl;
      }
      else if(s[0] == s[k - 1])
      {
          // K strings will have same first character
          cout << s[0];

          // If all are same
          if(s[k] == s[n-1])
          {
              // distribute evenly
              for (int i = 0; i < (n - k + k - 1) / k; i++)
              {
                  cout << s[n - 1];

              }
              cout << endl;
          }
          // If all are not same, append all lexico larger chars to 
          // Suppose aaabc ab ac a is possible. But ac > ab. So, we do. abc a a 
          else 
          { 
              for (int i = k; i < n; i++)
              {
                  cout << s[i];
              }
              cout << endl;
          }
            }
   }
   return 0;
}


