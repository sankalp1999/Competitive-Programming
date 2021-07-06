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
        unordered_map<int,int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            //    s.insert(v[i]);
            s[v[i]]++;
        }
            if(n >= 2 && s.size() == 1)
            {
                cout << "YES" << endl;
                continue;
            }
            if(s.size() == 2 )
            {
                if(n == 2 && s.find(0) != s.end())
                {
                    cout << "NO" << endl;
                    continue;
                }
                else if(s.find(0) != s.end())
                {
                    int zero = s[0];
                    int g = n - zero;
                    if(g >= 2)
                    {
                        cout << "YES" << endl;
                        
                    }
                    else
                        cout << "NO" << endl;
                    continue;
                }
            }

        int flag = 1;
        for (int i = 0; i < 30; i++)
        {
            int mask = (1 << i);
            int x = 0;
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if(v[j] & (1 << i ))
                {
                    count++;
                }
            }

            if(count & 1)
                {
                    flag = 0;
                    break;
                }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    }