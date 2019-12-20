#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;


vector<int> lcs2d(int a[], int b[], int n, int m)
{
    int i, j;int dp[200][200] = {0};
    vector<int> back;
    for (i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (j = 0; j <= m; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                back.push_back(a[i - 1]);
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    int index = dp[n][m];
    int index2 = index;
    int lcs[index + 1];
    // Set the terminating character

    // Start from the right-most-bottom-most corner and
    // one by one store characters in lcs[]
    i = n, j = m;
    while (i > 0 && j > 0)
    {
        // If current character in X[] and Y are same, then
        // current character is part of LCS
         
        
         if (a[i - 1] == b[j - 1])
         {
             lcs[index - 1] = a[i - 1]; // Put current character in result
             i--;
             j--;
             index--; // reduce values of i, j and index
        }

        // If not same, then find the larger of two and
        // go in the direction of larger value
        else if (dp[i - 1][j] > dp[i][j - 1])
            {i--;}
        else
            {j--;} 

   }
   vector<int> r;
   for (int i = 0; i < index2; i++)
   {
       r.push_back(lcs[i]);
   }
   cout << " here " << endl;
   cout << endl;
   for (int i : r)
   {    
       cout << i << " ";
}

return r;
}

int main()
{
    int n;
    int m;
    int o;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> v;
    v = lcs2d(a, b, n, m);
 

    cin >> o;
    int c[o];
    for (int i = 0; i < o; i++)
    {
        cin >> c[i];
    }
    int arr[v.size()];
    for (int i = 0; i < v.size(); i++)
    {
        arr[i] = v[i];
    }
        v = lcs2d(arr, c, v.size(), o);
    cout << v.size() << endl;
}