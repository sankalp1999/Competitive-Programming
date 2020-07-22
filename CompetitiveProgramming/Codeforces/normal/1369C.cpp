#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const double PI = 4 * atan(1);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // your code here
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<long long int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long int> p(k);
        for(int i = 0;i < k; ++i)
        {
            cin >> p[i];
        }
        
       sort(v.begin(), v.end());
       sort(p.begin(), p.end(), greater<int>());
       
       long long int running_sum = 0;
       for (int i = 0; i <  k; i++)
       {
               running_sum += v[n - i - 1];
               if(p[k - i - 1] == 1)
                   running_sum += v[n - i - 1];
       }
       int u = 0;
       int i = 0;
       for (int i = 0; i < k; i++)
       {
           p[i]--;
       }
       int index = 0;
       for (int i = 0; i < k; i++)
       {
           if(p[i] == 0)
               continue;
           running_sum += v[index];
           index += p[i];
       }
           cout << running_sum << endl;
    }

    cout.flush();
    return 0;
}
// 1 7 13 17
// 1 3 
// we want as many small numbers as possible to go into the 
// larger bucket so that we can avoid them from getting intom
// larger buckets.

// This will allow for bigger numbers to get into the buckets
// We want the smaller buckets to have the larger numbers 
// and bigger buckets to have the smaller numbers.