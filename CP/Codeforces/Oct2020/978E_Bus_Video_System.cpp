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
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    lli maxi, mini;
    maxi = 0;
    mini = 0;
    lli sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += v[i];
        maxi = max(maxi, sum);
        mini = min(mini, sum);
    }

    //    cout << maxi << " " << mini << endl;
    lli left = w - maxi;
    lli right = 0 - mini;
    

    if(left >= right)
    {
        cout << left - right  + 1<< endl;
    }
    else
    {
        cout << 0 << endl;
    }
    }