#include<bits/stdc++.h>
using namespace std;
int t[105];
int main() {
	int n;
	scanf("%d", &n);
	t[0] = 0;
	for(int i = 1; i <= n; ++i)
		scanf("%d", &t[i]);
	t[n+1] = 91;
	for(int i = 1; i <= n + 1; ++i) {
		if(t[i] > t[i-1] + 15) {
			printf("%d\n", t[i-1] + 15);
			return 0;
		}
	}
	puts("90");
	return 0;
}