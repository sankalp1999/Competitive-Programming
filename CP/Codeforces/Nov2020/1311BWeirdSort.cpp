#include<bits/stdc++.h>
/*
Here, we check if we find an inversion,
like just a[i] > a[i + 1], if a swap 
is available at this position, which 
can be done as p[pos - 1] = 1(god, how can i be so dumb?)


we swap them. Keep doing this. until no such 
operation takes place. O(n ^ 2) would work
due to low constraints.

In the end, just check whether the array is sorted.

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
       int n, m;
       cin >> n >> m;
       vector<int> a(n);
       vector<int> p(n);
       for (int i = 0; i < n; i++)
       {
           cin >> a[i];
       }
       for (int i = 0; i < m; i++)
       {
           int pos;
           cin >> pos;
           p[pos - 1] = 1;
       }

    // If find descending, just swap if possible.
    

       while(true)
       {
           bool flag = false;
           for (int i = 0; i < n ; i++)
           {
               if(p[i] && a[i] > a[i + 1])
               {
                   flag = true;
                   swap(a[i], a[i + 1]);
               }
           }
           if(!flag)
               break; // This means no further operations possible
       }
       bool flag = true;
       for (int i = 0; i < n - 1; i++)
       {
           flag &= a[i] <= a[i + 1]; // Check if it got sorted
       }
       if(flag)
           cout << "YES" << endl;
       else
       {
           cout << "NO" << endl;
       }
      }
}