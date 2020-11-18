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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 0;
        int baap = 0; // last or parent.



        int flag = 0;
        vector<int> h(n, 1e9);
        // the h acts as a queue for choosing the parensts
        // Since we have to distribute wisely > depth1
        // Whenever, we find a non-increasing segment,
        // go start filling next parent


        h[0] = 0;
        for (int i = 1; i< n ; i++)
        {
            if(v[i - 1] > v[i] )
            {
                baap++;
            }
            h[i] = h[baap] + 1;
        }
        cout << h[n - 1] << endl;
    }
    }