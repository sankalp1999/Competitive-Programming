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
        
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin) ;
        freopen("output.txt", "w", stdout) ;
        #endif
        ios_base::sync_with_stdio(false);
        cin.tie(NULL) ; cout.tie(NULL) ;
        int t;
        cin >> t;

        while (t--)
        {
            
            lli n, sum;
            cin >> n;
            sum = 0;
            int i = 1;
            while (1)
            {
                lli p = n / pow(5, i);
                i++;
                if (p == 0)
                    break;
                sum += p;
            }
            cout << sum << endl;
        }
    return 0;
    }