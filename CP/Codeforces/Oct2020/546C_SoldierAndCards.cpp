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

    int n;
    cin >> n;
    int k1, k2;
    cin >> k1;
    vector<int> v(k1);

    for (int i = 0; i < k1; i++)
    {
        cin >> v[i];
    }

    cin >> k2;
        vector<int> oppo(k2);
    for (int i = 0; i < k2; i++)
    {
        cin >> oppo[i];
    }

    set<deque<int>> s;
    
    deque<int> p1;
    deque<int> p2;
    reverse(v.begin(), v.end());
    reverse(oppo.begin(), oppo.end());

    for (int i : v)
    {
        p1.push_back(i);

    }
    for (int i : oppo)
    {
        p2.push_back(i);
    }

    int count = 0;
    while (!p1.empty() && !p2.empty())
    {
        if(s.count(p1) && s.count(p2))
        {
            cout << -1 << endl;
            return 0;
        }
        s.insert(p1);
        s.insert(p2);

        if(p1.back() > p2.back())
        {
            int top = p2.back();
            int top2 = p1.back();
            p2.pop_back();
            p1.pop_back();
            
            p1.push_front(top);
            p1.push_front(top2);
        }
        else // p2.back() > p1.back()
        {
            int top = p1.back();
            int top2 = p2.back();
            p1.pop_back();
            p2.pop_back();

            p2.push_front(top);
            p2.push_front(top2);
        }
        count++;
    }
    if(p1.empty())
    {
        cout << count << " " << 2 << endl;
    }
    else
    {
        cout << count << " " << 1 << endl;
    }
    }