#include <bits/stdc++.h>
 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<iii> viii;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<vii> vvii;
typedef vector<iii> viii;
typedef pair<ll, ll> llll;
typedef vector<llll> vllll;
typedef long double ld;
const int MOD = 1e9 + 7;
const ll INF = ll(1e18);
 
#define fi first
#define se second
#define pb push_back
#define debug(x) cerr << #x << " is " << x << endl;
#define gcd __gcd
#define forp(i, begin, end) for (__typeof(end) i = (begin); i < (end); i++)
#define form(i, begin, end) for (__typeof(end) i = (begin); i >= (end); i--)
#define scan scanf
#define print printf
#define mp make_pair
 
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
 
void yes() {cout << "Yes" << endl;}
void no() {cout << "No" << endl;}
//__gcd(value1, value2)
//
 
/*ll power(ll base, ll exp)
{
	ll ans = 1;
    while (exp != 0) 
	{
        if (exp % 2) 
		{    // q is odd
            ans = (ans * base)%MOD;
			exp--;
        }
        base = (base * base)%MOD;
        exp /= 2;
    }
	ans %= MOD;
	if(ans < 0)
	{
		ans += MOD;
	}
    return ans;
}
*/
 
/*
ll choose(ll n, ll r)
{
	if(r == 0)
	{
		return 1;
	}
	if(n == r)
	{
		return 1;
	}
	long long denom = 1;
	for (long long i = 2; i <= r; i++)
	{
		denom = (denom * i) % MOD;
	}
	long long res = 1;
	for (long long i = n; i > n - r; i--) 
	{
		res = (res * i) % MOD;
	}
	res = (res * power(denom, p- 2)) % MOD;
	return res;
}
*/
 
/*bool comp(ii a, ii b)
{
	if(a.first != b.first) return (a.first < b.first);
	else return (a.second < b.second);
}
*/
 
/*Graph Struct (Unweighted), Weighted add another i
vvi graph;
vi empty;
forp(i, 0, n)
{
	graph[i].pb(empty);
}
*/
 
/*DFS
bool visited[MAX_N + 1];
memset(visited, false, sizeof(visited));
 
void dfs(int u)
{
	visited[u] = true;
	stack<int> s;
	s.push(u);
	int v, w;
	while(!s.empty())
	{
		v = s.top();
		s.pop();
		forp(i, 0, graph[v].size())
		{
			w = graph[v][i];
			if(!visited[w])
			{
				s.push(w);
			}
			visited[w] = true;
		}
	}
}
*/
 
/*BFS (SSSP Unweighted)
int dist[MAX_N + 1];
memset(dist, -1, sizeof(dist));
 
void bfs(int u)
{
	dist[u] = 0;
	queue<int> q;
	q.push(u);
	int v, w;
	while(!q.empty())
	{
		v = q.front();
		q.pop();
		forp(i, 0, graph[v].size())
		{
			w = graph[v][i];
			if(dist[w] == -1)
			{
				dist[w] = dist[u] + 1;
				q.push(w);
			}
		}
	}
}
*/
 
/*
Dijkstra
ll dist[MAXN + 1];
void dijkstra(int v)
{
	dist[v] = 0;
	int u;
	priority_queue<ii, vii, less<ii> > > pq;
	pq.push(ii(dist[v], v));
	while(!pq.empty())
	{
		u = pq.top().second;
		pq.pop();
		forp(i, 0, graph[u].size())
		{
			ii p = graph[u][i]
			if(dist[p.first] > dist[u] + p.second)
			{
				d[p.first] = d[u] + p.second;
				pq.push(ii(d[p.first], p.first));
			}
		}
	}
}
*/
 
/*BIT Sample
ll tree[MAX_N + 1];
void update(int p, ll val)
{
	for(int i = p; i <= n; i += (i & -i))
	{
		tree[i] += val;
	}
}
ll sum(int p)
{
	ll ans = 0;
	for(int i = p; i > 0 ;i -= (i & -i))
	{
		ans += tree[i];
	}
	return ans;
}
*/
 
/*Segment Tree
ll tree[4*MAX_N + 1];
void build(int id = 1, int l = 0, int r = n)
{
	if(r - l < 2)
	{
		tree[id] = a[l];
		return ;
	}
	int mid = (l+r)/2;
	build(id * 2, l, mid);
	build(id * 2 + 1, mid, r);
	tree[id] = tree[id * 2] + tree[id * 2 + 1];
}
 
void modify(int p, int x, int id = 1, int l = 0, int r = n)
{
	tree[id] += x - a[p];
	if(r - l < 2)
	{	
		a[p] = x;
		return ;
	}
	int mid = (l + r)/2;
	if(p < mid)
	{
		modify(p, x, id * 2, l, mid);
	}
	else
	{
		modify(p, x, id * 2 + 1, mid, r);
	}
}
 
ll sum(int x, int y, int id = 1, int l = 0, int r = n)
{
	if(x >= r || l >= y)	return 0;
	if(x <= l && r <= y)	return tree[id];
	int mid = (l+r)/2;
	return (sum(x, y, id * 2, l, mid) + sum(x, y, id * 2 + 1, mid, r));
}
 
//Lazy part
//Increase Update
ll lazy[4*MAX_N + 1];
void upd(int id, int l, int r, int x)
{
	lazy[id] += x;
	tree[id] += (r - l) * x;
}
 
void shift(int id, int l, int r)
{
	int mid = (l + r)/2;
	upd(id*2, l, mid, lazy[id]);
	upd(id*2 + 1, mid, r, lazy[id]);
	lazy[id] = 0;
}
 
void increase(int x, int y, ll v, int id = 1, int l = 0, int r = n)
{
	if(x >= r or l >= y)	return ;
	if(x <= l && r <= y)
	{
		upd(id, l, r, v);
		return ;
	}
	shift(id, l, r);
	int mid = (l+r)/2;
	increase(x, y, v, id * 2, l, mid);
	increase(x, y, v, id*2+1, mid, r);
	tree[id] = tree[id * 2] + tree[id * 2 + 1];
}
 
ll sum(int x, int y, int id = 1, int l = 0, int r = n)
{
	if(x >= r or l >= y)	return 0;
	if(x <= l && r <= y)	return tree[id];
	shift(id, l, r);
	int mid = (l+r)/2;
	return (sum(x, y, id * 2, l, mid) + sum(x, y, id * 2 + 1, mid, r));
}
*/
 
/*Mo's Algorithm (sqrt-decompression)
int block;
int cnt[MAX_N + 1];
bool cmp(iii x, iii y)
{
	if(x.first.first/block != y.first.first/block) return x.first.first/block < y.first.first/block;
	return x.first.second < y.first.second;
}
 
void add(int pos)
{
	
}
 
void remove(int pos)
{
 
}
 
int currL = 1, currR = 1;
for(int i=0; i<m; i++) 
{
	int L = q[i].first.first, R = q[i].first.second;
	while(currL < L) {
		remove(currL);
		currL++;
	}
	while(currL > L) {
		add(currL-1);
		currL--;
	}
	while(currR <= R) {
		add(currR);
		currR++;
	}
	while(currR > R+1) {
		remove(currR-1);
		currR--;
	}
	ans[q[i].i] = answer;
}
*/
 
/*KMP
void computeLPSArray(char *pat, int M, int *lps);
 
void KMPSearch(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
 
    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int *lps = (int *)malloc(sizeof(int)*M);
    int j  = 0;  // index for pat[]
 
    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);
 
    int i = 0;  // index for txt[]
    while (i < N)
    {
      if (pat[j] == txt[i])
      {
        j++;
        i++;
      }
 
      if (j == M)
      {
        printf("Found pattern at index %d \n", i-j);
        j = lps[j-1];
      }
 
      // mismatch after j matches
      else if (i < N && pat[j] != txt[i])
      {
        // Do not match lps[0..lps[j-1]] characters,
        // they will match anyway
        if (j != 0)
         j = lps[j-1];
        else
         i = i+1;
      }
    }
    free(lps); // to avoid memory leak
}
 
void computeLPSArray(char *pat, int M, int *lps)
{
    int len = 0;  // length of the previous longest prefix suffix
    int i;
 
    lps[0] = 0; // lps[0] is always 0
    i = 1;
 
    // the loop calculates lps[i] for i = 1 to M-1
    while (i < M)
    {
       if (pat[i] == pat[len])
       {
         len++;
         lps[i] = len;
         i++;
       }
       else // (pat[i] != pat[len])
       {
         if (len != 0)
         {
           // This is tricky. Consider the example 
           // AAACAAAA and i = 7.
           len = lps[len-1];
 
           // Also, note that we do not increment i here
         }
         else // if (len == 0)
         {
           lps[i] = 0;
           i++;
         }
       }
    }
}
*/
 
/*struct matrix {
  // N is the size of the matrix
  ll m[N][N];
  matrix()
  {
     memset(m,0,sizeof(m));
  }
  matrix operator * (matrix b)
	{
		matrix c = matrix();
    for (int i = 0; i < N; ++i)
        for (int k = 0; k < N; ++k)
            for (int j = 0; j < N; ++j) 
                c.m[i][j] = (c.m[i][j] + m[i][k] * b.m[k][j]) % MOD;
    return c;
	}
  ...
};
 
matrix modPow(matrix m,ll n)
{
  if ( n == 0 )
    return unit; // the unit matrix - that is 1 for principal diagonal , otherwise 0
  matrix half = modPow(m,n/2);
  matrix out = half * half;
  if ( n % 2 )
    out = out * m;
  return out; 
}
 
*/
 
 
/*DSU (Values are -ve)
memset(par, -1, sizeof(par));
int root(int v){return par[v] < 0 ? v : (par[v] = root(par[v]));}
void merge(int x,int y){	//	x and y are some tools (vertices)
        if((x = root(x)) == (y = root(y))     return ;
	if(par[y] < par[x])	// balancing the height of the tree
		swap(x, y);
	par[x] += par[y];
	par[y] = x;
}
*/
 
/*
bool prime[10000001];
vector<int> primes;
void Sieve(int n)
{
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
	for(int i = 2; i <= n; i++)
	{
		if(prime[i])
		{
			primes.push_back(i);
		}
	}
}
 
bool is_prime(ll n)
{
	for(int i = 0; primes[i]*primes[i]<=n; i++)
    {
        if(n % primes[i] == 0)
        {
            return false;
        }
    }
    return true;
}
*/
 
#define fastio ios_base::sync_with_stdio(false)
#define read(x) scan("%d", &x);
//Main Program
/*
bool prime[10000001];
vector<int> primes;
void Sieve(int n)
{
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
	for(int i = 2; i <= n; i++)
	{
		if(prime[i])
		{
			primes.push_back(i);
		}
	}
}
 
bool is_prime(ll n)
{
	for(int i = 0; primes[i]*primes[i]<=n; i++)
    {
        if(n % primes[i] == 0)
        {
            return false;
        }
    }
    return true;
}
 
int main()
{
	fastio;
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	ll n;
	cin >> n;
	ll x = n*n + 1;
	Sieve(2000000);
	if(is_prime(x)) cout << "Yes";
	else cout << "No";
	return 0;
}
*/
 
/*
int a[1000001];
int dp[1000001];
int main()
{
	ios_base::sync_with_stdio(false);
	//freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		dp[a[i]] = 1;
	}
	sort(a, a + n);
	int ans = 0;
	int m = 1000000;
	for(int i = 1; i <= m; i++)
	{
		if(dp[i] != 0)
		{
			for(int j = 2*i; j <= m; j += i)
			{
				if(dp[j] != 0)
				{
					dp[j] = max(dp[j], dp[i] + 1);
				}
			}
		}
	}
	for(int i = 1; i <= m; i++)
	{
		ans = max(ans, dp[i]);
	}
	cout << ans;
	return 0;
}
*/
 
/*
#define inf 0x3f3f3f3f
 
int pri[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
int dp[101][1 << 16];
int a[111];
int mask[62];
int pre[101][1 << 16][2];
 
int main() 
{
	fastio;
	for(int i = 1; i <= 60; ++i)
	{
		for(int j = 0; j < 16; ++j)
		{
			if (i % pri[j] == 0)
			{
				mask[i] |= 1 << j;
			}
		}
	}
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	memset(dp, 0x3f, sizeof(dp));
	dp[0][0] = 0;
	int m = 1 << 16;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			//cout << i << " " << j << endl;
			if (dp[i - 1][j] != inf) 
			{
				for(int k = 1; k <= 58; ++k) 
				{
					if ((j & mask[k]) == 0) 
					{
						int t = j | mask[k];
						int z = dp[i - 1][j] + abs(k - a[i]);
						if (z < dp[i][t])
						{
							dp[i][t] = z;
							pre[i][t][0] = k;
							pre[i][t][1] = j;
						}
					}
				}
			}
		}
	}	
	//cout << "JQWE" << endl;
	int ret = inf;
	int rc;
	for(int i = 0; i < m; ++i)
	{
		if (dp[n][i] < ret) 
		{
			ret = dp[n][i];
			rc = i;
		}
	}
	vi ans;
	for (int i = n; i >= 1; --i) 
	{
		ans.pb(pre[i][rc][0]);
		rc = pre[i][rc][1];
	}
	for (int i = n - 1; i >= 0; --i)
	{
		cout << ans[i] << " ";
	}
	return 0;
}
*/
 
/*
int a[100001];
int main()
{
	fastio; cin.tie(0);
	//ios_base::sync_with_stdio(false);
	//freopen("input.txt", "r", stdin);
	int n, k;
	cin >> n >> k;
	if(k % 2)
	{
		for(int i = 0; i < (k+1)/2; i++)
		{
			a[2*i] = i+1;
		}
		for(int i = 0; i < (k+1)/2; i++)
		{
			a[2*i + 1] = k+1-i;
		}
		for(int i = k+1; i < n; i++)
		{
			a[i] = i+1;
		}
	}
	else
	{
		for(int i = 0; i < k/2+1; i++)
		{
			a[2*i] = i+1;
		}
		for(int i = 0; i < k/2+1; i++)
		{
			a[2*i + 1] = k+1-i;
		}
		for(int i = k+1; i < n; i++)
		{
			a[i] = i+1;
		}
	}
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	return 0;
}
*/
 
/*
char s[1001][1001];
int a[1001][1001];
int l[1001][1001];
int r[1001][1001];
int u[1001][1001];
int d[1001][1001];
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	//freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	int n, m;
	while(t > 0)
	{
		memset(a, 0, sizeof(a));
		memset(l, 0, sizeof(l));
		memset(r, 0, sizeof(r));
		memset(u, 0, sizeof(u));
		memset(d, 0, sizeof(d));
		cin >> m >> n;
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cin >> s[i][j];
				a[i][j] = s[i][j] - '0';
			}
		}
		for(int i = 1; i <= m; i++)
		{
			for(int j = n; j >= 1; j--)
			{
				if(a[i][j])
				{
					l[i][j] = 1;
					if(a[i - 1][j])
					{
						l[i][j] = l[i - 1][j + 1] + 2;
					}
				}
			}
		}	
		for(int i = m; i >= 1; i--)
		{
			for(int j = 1; j <= n; j++)
			{
				if(a[i][j])
				{
					r[i][j] = 1;
					if(a[i + 1][j])
					{
						r[i][j] = r[i + 1][j - 1] + 2;
					}
				}
			}
		}	
		for(int i = m; i >= 1; i--)
		{
			for(int j = n; j >= 1; j--)
			{
				if(a[i][j])
				{
					u[i][j] = 1;
					if(a[i][j + 1])
					{
						u[i][j] = u[i + 1][j + 1] + 2;
					}
				}
			}
		}	
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(a[i][j])
				{
					d[i][j] = 1;
					if(a[i][j - 1])
					{
						d[i][j] = d[i - 1][j - 1] + 2;
					}
				}
			}
		}
		int ans = 0;
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(a[i][j])
				{
					ans = max(ans, l[i][j]+d[i][j]+u[i][j]+r[i][j]-3);
				}
			}
		}
		cout << ans << endl;
		t--;
	}
	return 0;
}
*/
 
/*
int main()
{
	ios_base::sync_with_stdio(false);
	//freopen("input.txt", "r", stdin);
	ll a;
	cin >> a;
	ll n = ll(1e17);
	n *= 18;
	//cout << n << endl;
	n %= a;
	ll k = n;
	//cout << n << endl;
	for(int i = 0; i < 44; i++)
	{
		n = (n + k)%a;
	}
	//cout << n << endl;
	if(n < 0)
	{
		n += a;
	}
	ll c = a - n; ll d = c + ll(1e18) - 1LL;
	cout << c << " " << d;
	return 0;
}
*/
 
 
int main()
{
	fastio;
	int n;
	cin >> n;
	string a, b;
	cin >> a;
	cin >> b;
	int ans = 0;
	int x, y;
	int w, z;
	for(int i = 0; i < n; i++)
	{
		x = a[i] - '0';
		y = b[i] - '0';
		w = min(x, y);
		z = max(x, y);
		ans += min(z - w, w + 10 - z);
	}
	cout << ans;
	return 0;
}
 
 
/*A
int main()
{
	ios_base::sync_with_stdio(false);
	//freopen("input.txt", "r", stdin);
	
	return 0;
}
*/
 
/*A
int main()
{
	ios_base::sync_with_stdio(false);
	//freopen("input.txt", "r", stdin);
	
	return 0;
}
*/
 
/*A
int main()
{
	ios_base::sync_with_stdio(false);
	//freopen("input.txt", "r", stdin);
	
	return 0;
}
*/
 
/*A
int main()
{
	ios_base::sync_with_stdio(false);
	//freopen("input.txt", "r", stdin);
	
	return 0;
}
*/