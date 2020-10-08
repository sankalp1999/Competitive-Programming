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
   vector<int> pre;
   pre.push_back(1);
   int toggle = 0;
   lli sum = 1;
   lli prev = 1;
   while (1)
   {
    
       if(toggle == 0)
       {
           prev = sum;
           sum++;
           toggle = 1;
             pre.push_back(sum);
       }
       else if(toggle == 1)
       {
           sum += prev;
           toggle = 0;
             pre.push_back(sum);
       }
       if(sum > 100)
           break;
     
   }
   for(int i : pre)
   {
       cout << i << " ";
   }
   cout << endl;

   while (t--)
   {
       int n;
       cin >> n;
       vector<int> v;
       for (int i = 2; i * i <= n; i++)
       {
           if(n % i == 0)
           {   
            
               v.push_back(i);
               if(n/i != i)
               v.push_back(n / i);
           }
       }
       sort(v.begin(), v.end());
       
       for(int i : v)
       {
           cout << i << " ";
       }
       cout << endl;
   }
}


