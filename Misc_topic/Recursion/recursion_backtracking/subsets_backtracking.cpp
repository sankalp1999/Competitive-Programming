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

// subset()
// {

// }


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n = 5;
   int arr[5] = {1, 2, 3, 4, 5};
   int m = 7;
   int sum = 0;
   cout << accumulate(arr, arr + n, sum);
   
//    subset();
}