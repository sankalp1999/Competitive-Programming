#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, p, k;
    while(t--)
    {
    	cin >> n >> p >> k;
    int a[n];
    for(int i =0 ; i < n; i++)
    {
        cin >> a[i];
    }
    int maxProd = 0;
    sort(a, a + n);
    int sum[n+1] = {0};
    sum[0] = 0;
    sum[1] = a[0]; 
      if(sum[1] <= p)
            {
                maxProd = 1;
            }
    for(int i = 2; i <= k; i++)
    {
            sum[i] = sum[i-1] + a[i-1];
            if(sum[i] <= p)
            {
                maxProd = i;
            }
    }

    for(int i = k; i <= n; i++)
    {
        sum[i] = sum[i-k]+ a[i-1];
        if(sum[i] <=p)
        {
        maxProd = i;
        }
    }
    cout << maxProd << endl;
    }

}