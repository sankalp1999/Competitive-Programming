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
       string s;
       cin >> s;
       int count = 0;

       vector<int> arr;

       for (int i = 0; i < n - 1; i++)
       {
           if(s[i] == s[i + 1])
           {
               count++;
           }
           else
           {
               count++;
               arr.push_back(count);
               count = 0;
           }
        }
        if(s[n - 1] != s[n - 2])
        {
            arr.push_back(1);
        }
        else if(count > 0)
        {
            count++;
            arr.push_back(count);
        }
        int left = 0;
        int right = arr.size() - 1;
        int res = 0;
        while (left <= right)
        {
            if (arr[left] > 1)
            {
                arr[left] = 0;
                left++;
            }
            else 
            {
                arr[right]--;   
                if (arr[right] == 0)
                {
                    right--;
                }

                arr[left] = 0;
                left++;
            }
            res++;
        }
        cout << res << endl;
   }
}