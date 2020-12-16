#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

// void Solve() {
// 	int n;
// 	cin >> n;
// 	vector<int> a(n);
// 	for(int i = 0; i < n; i ++) {
// 		cin >> a[i];
// 	}
// 	vector<int> dp(50, 0);
// 	for(int i = 0; i < n; i ++) {
// 		for(int j = 0; j < 30; j ++) {
// 			dp[j] += a[i] % 2;
// 			a[i] /= 2;
// 		}
// 	}
// 	long long num = 0;
// 	long long mul = 1;
// 	for(int i = 0; i < 50; i ++) {
// 		if(i) {
// 			dp[i] += (dp[i-1]/2);
// 		}
// 		if(dp[i]) num += mul;
// 		mul *= 2LL;
// 	}
// 	cout << num << "\n";
// }
 

void solve()
{
    int n;
    cin >> n;
    lli res = 0;
    lli prefix_sum = 0; // only the bits to the right affect
                        // the answer.
    for (int i = 0; i < n; i++)
    {
        lli temp;
        cin >> temp;
        res = res | temp;
        prefix_sum += temp;
        res = res | prefix_sum;

    }
    cout << res << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int test_case = 1;
	cin >> test_case;
	for(int i = 1; i <= test_case; i ++) {
		solve();
	}
	
	return 0;
}  