#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <queue>
#include <bitset>
using namespace std;
 
#ifdef LOCAL
	#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
	#define eprintf(...) 42
#endif
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef long double ld;
#define mp make_pair
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
ll n, pos, neg;
 
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
 
	scanf("%lld", &n);
	int x;
	pos = 1;
	neg = 0;
	int bal = 1;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		if (x < 0) bal *= -1;
		if (bal == 1)
			pos++;
		else
			neg++;
	}
	printf("%lld %lld\n", pos * neg, n * (n + 1) / 2 - pos * neg);
 
	return 0;
}