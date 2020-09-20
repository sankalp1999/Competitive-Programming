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
      for(int i = 0; i < n; i++)
      {
          cin >> v[i];
      }
      sort(v.begin(), v.end());
      if(n <= 1)
      {
          cout << 0 << endl;
          continue;
      }
      
      int max_sum = v[n-1] + v[n-2];
      int min_sum = v[0] + v[1];
      int max_count = 0;
      for(int i = min_sum ; i <= max_sum ; i++)
      {
          int l = 0;
          int r = n - 1;
          int count = 0;
          while(l < r)
          {
              if(v[l] + v[r] == i)
              {
                  count++;
                  l++;
                  r--;
              }
              else if(v[l] + v[r] < i)
              {
                  l++;
              }
              else if(v[l] + v[r] > i)
              {
                  r--;
              }
          }
          max_count = max(max_count, count);

      }
      cout << max_count << endl;
   }
   
}



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

      for(int i = 0; i < n; i++)
      {
          cin >> v[i];
      }


      int max_pair = 0;

      for (int totalWeight = 2; totalWeight <= 100; totalWeight++)
      {
          int pairs = 0;
        int count[101] = {0};
          for (int i : v)
          {
              if(totalWeight > i && count[totalWeight - i] != 0)
              {
                  count[totalWeight - i]--; // We take i and totalWeight-i so no need to append this person to the storage
                  pairs++;
              }
              else
              {
                  count[i]++; // Append this person in the storage
              }
           }

        max_pair = max(max_pair, pairs);
      }
      cout << max_pair << endl;
   }
}