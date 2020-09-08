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
       long long int count[32];
       for(int i = 0;i < 32; i++)count[i]=0;
       
       for (int i = 0; i < n; i++)
       {
           string arr;
           cin >> arr;

           int bitset = 0;
           for (char c : arr)
           {
               if(c == 'a')
               {
                   bitset = bitset | (1 << 0);
               }
               else if(c == 'e')
               {
                   bitset = bitset | (1 << 1);
               }
               else if(c == 'i')
               {
                   bitset = bitset | (1 << 2);
               }
               else if(c == 'o')
               {
                   bitset = bitset | (1 << 3);
               }
               else if(c == 'u')
               {
                   bitset = bitset | (1 << 4);
               }
           }
			count[bitset]++;
       }
       long long int ans = 0;
       for(int i = 0; i <  32; i++)
    	{
    		for(int j = i+1;j < 32; j++)
    		{
    			if( (i | j) == 31)
    			ans += count[i] * count[j];
    		}
    	}
    	ans += (count[31]*(count[31]-1))/2; // last one can make pairs with themselves
    	
    	cout << ans << endl;
      
   }
}