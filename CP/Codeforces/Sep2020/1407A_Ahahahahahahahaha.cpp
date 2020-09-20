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
       int arr[n];
       int count = 0;
       
       // WE can remove n/2 elements
       
       // If more than or equal to half of elements are 0, then we just remove all 1s
       // else we remove all the zeros.

       // Since, we have only two kinds of numbers, this is possible.

     
       for (int i = 0; i < n; i++)
       {
           cin >> arr[i];
           count += arr[i] == 0;
       }
       if(count >= n/2)
       {   
           // Less ones. so remove n - count ones.
           cout << count << endl;
           for (int i = 0; i < count; i++)
           {
               cout << 0 << " ";
           }
           cout << endl;
           continue;
       }
       else
       {
           // This means we have more 1s
           // no. of zeros is less than n/2 
           // 1 1 1 1 1 1 0 0 0 0
           // Remove all zeros
           // 10/2 = 5. We will remove  1 + n/2-1 zeros

           int k = n - count;
           if (k % 2)
               k--;
           cout << k << endl;
           for (int i = 0; i < k; i++)
           {
               cout << 1 << " ";
           }
           cout << endl;
       }
   }
        return 0;
}