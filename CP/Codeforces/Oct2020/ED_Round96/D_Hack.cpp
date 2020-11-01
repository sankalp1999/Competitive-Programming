#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
#define pb push_back
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
		
		int n;
		cin >> n;
		
		string S;
		cin >> S;
		vector<int> v;
		int cur = 1;
		
		for (int i=1; i<n; i++) {
			if (S[i]==S[i-1]) ++cur;
			else {
				v.pb(cur);
				cur = 1;
			}
		}
		v.pb(cur);
		int moves = 0, j=0, k = v.size();
		while (j<k && v[j] == 1) ++j;
		for (int i=0; i<k; i++) {
			if (v[i]>1) moves += 1;
			else {
				if (j<i) j=i+1;
				while (j<k && v[j] == 1) ++j;
				if (j==k) {
					moves += ((k-i)/2);
					if ((k-i)%2) ++moves;
					break;
				} else {
					v[j] -= 1;
					moves += 1;
				}
			}
		} 
		
		
		cout << moves << endl;
		
	}
	
	
	
    
    return 0;
}