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

/*
Bitmasking lectures by Waqar Ahmed
Bitmasking can be used with Binary Search, Principle of Inclusion-Exclusion
*/

 /*
    LOGIC : Check if the nth bit is on or not.
    empty   0 0 0 
      a     0 0 1
      b     0 1 0
      c     1 0 0 4 
      a b   0 1 1 3 have been flipped
      a c   1 0 1
      b c   1 1 0
      a b c 1 1 1

   */
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
   lli F = 1 << n;
   char arr[] = {'a', 'b', 'c', 'd'};
   cout << F << endl;

  
   for (int mask = 0; mask < F; mask++)
   {
       for (int j = 0; j < n; j++)
       {
            if((mask & (1 << j) ) != 0) // if bit is on, then that char is to be printed
                cout << arr[j] << " ";
       }
       cout << endl;
   }
   }
   
}