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

void extracted(std::vector<long long> &dp) {
  for (int i : dp) {
    cout << i << " ";
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k;
  cin >> n >> k;

  vector<long long int> h(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> h[i];
  }
  vector<lli> dp(n + 1, 0);
  dp[1] = 0;
  dp[2] = abs(h[2] - h[1]);
  for (int i = 3; i <= n; i++) {

      dp[i] = INT_MAX;
      for (int j = 1; j <= k; j++)
      {
            if(j-i>=0)
                continue;
            dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
      }
  }
//   extracted(dp);
  cout << dp[n] << endl;
}