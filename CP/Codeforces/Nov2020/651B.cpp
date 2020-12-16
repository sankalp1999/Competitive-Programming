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
   int arr[1001] = {0};
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
       int temp;
       cin >> temp;
       arr[temp]++;
   }
   lli i = 1;
   int count = 0;
   vector<int> res;
   int num = n;


   // For each monotonic sequence, add len(sequence) - 1
   // That is what i am doing since monotonic sequence gives best answer
   while (n--)
   {
       if(i == num)
       {
           i = 1;
       }
       if(arr[i]>0)
       {
            //    cout /<< arr[i] << " ";
            res.pb(i);
            arr[i]--;
       }
       i++;
   }
   
   for (int i = 0; i < (int)res.size() - 1; i++){
       if(res[i] < res[i + 1] )
       {
           count++;
       }
   }
   cout << count << endl;
}