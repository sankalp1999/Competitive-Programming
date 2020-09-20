/*
I had understood the observation that was to find the suffix.
But my solution was influenced by finding the peak of the solution.
This did not work for all test cases. I don't know why.
40 mins

Editorial:
Use a pointer to simulate the structure of the array and reach
the beginning of this suffix.
*/

#include<bits/stdc++.h>

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
       vector<int> v(n, 0);
    //    v.push_back(INT_MIN+100);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }

       int flag = 0;

       int i = n - 1;
       while(i >= 1 && v[i-1] >= v[i])
           i--;
       while(i >= 1 && v[i-1] <= v[i])
           i--;
           
       cout << i  << endl;
   }
}