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
   long long int n;
   cin >> n;
   vector<long long int> res;
   for (int i = 1; i * i <= 2e9 + 1; i++) {
     res.push_back(i * i );
   }
   reverse(res.begin(), res.end());
   string temp = to_string(n);
   int arr[10] = {0};
   for (char c : temp) {
     arr[c - '0']++;
     }
     // Now if we have all the required digits in the temp
     // then our largest number is our answer.
     

   
   for (int i = 0; i < (int)res.size(); i++) {
     string temp2 = to_string(res[i]);
     if(temp2.size() > temp.size()) continue;
     int j = 0;
     int k = 0;
     while (k < temp2.size() && j < temp.size()) {
       if (temp[j] == temp2[k]) {
         k++;
       }
         j++;
     }
     if (k == temp2.size()) {
       cout << temp.size() - temp2.size() << endl;
       return 0;
       }
   }
   cout << -1 << endl;
   return 0;
   
}