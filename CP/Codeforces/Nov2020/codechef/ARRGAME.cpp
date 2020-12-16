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
        vector<int> segs;
        int count = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if(v[i] == v[i+1] && v[i] == 0)
            {
                count++;
            }
            else if(v[i] == 0 && v[i + 1] == 1)
            {
                segs.push_back(count);
                count = 1;
            }
            }
            

            int max_odd, max_even;
            max_odd = max_even = 0;
            int second_max = 0;
            sort(segs.begin(), segs.end(), greater<int>());
            if(segs.size()>1)
            second_max = segs[1];

            for (int i = 0; i < segs.size(); i++)
            {
                if (segs[i] % 2 == 1)
                {
                    if(segs[i] > max_odd)
                    {
                        
                        max_odd = segs[i];
                    }
                    
                }
                else
                {
                    max_even = max(max_even, segs[i]);
                }
            }
            int count_odd = 0;
            for (int i = 0; i < segs.size(); i++)
            {   
                if(segs[i] == max_odd)
                {
                    count_odd++;
                }
            }

      

            if (max_odd/2 + 1 > second_max && max_odd != 0 )
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            
        }
    }

