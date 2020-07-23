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

int arr[(int)1e6 + 1] = {0};
void smallestDivisor() 
{
    long long int limit = (int)1e6 + 1;
    arr[1] = 1;

    for (int i = 2; i <= (limit); i++)
    {
        if(i%2==0)
        {
            arr[i] = 2;
            continue;
        }
        int flag = 0;
        for (int j = 3; j <= sqrt(i); j += 2)
        {
            if (i % j == 0)
            {
                arr[i] = j;
                // cout << j << endl;
                flag = 1;
                break;
            }
        }
          if(flag == 0)        
            {   arr[i] = i;
                // cout << i << endl;
            }
    }
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   smallestDivisor();

    lli res = 0;
   while (t--)
   {
       lli n, k;
       cin >> n >> k;
       res = 0;
       while(k--)
       {
            n += arr[n];
            
       }
        cout << n << endl;
   }
}