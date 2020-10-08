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

    int dp[110][2][2];


    int vacation(vector<int>& v, int idx, int contest, int gym)
    {
        
        if (idx == v.size())
        {
            return 0; // Time to return
        }
        if( dp[idx][gym][contest] != -1)
            return  dp[idx][gym][contest];
                       int ans;
        if (v[idx] == 0)
        {
            ans = vacation(v, idx + 1, 0, 0) + 1;
        }
        else if(v[idx] == 1)
        {
            if(!contest) // If last contest was 0, then i can do contest today
            {
                ans = min( vacation(v, idx + 1, 1, 0) , vacation(v, idx + 1, 0, 0) + 1 );
            }
            else
                ans =  vacation(v, idx + 1, 0, 0) + 1;
        }
        else if( v[idx] == 2 )
        {
            if(!gym)
            {
                ans =  min(vacation(v, idx + 1, 0, 1), vacation(v, idx + 1, 0, 0) + 1);
            }else
                ans =  vacation(v, idx + 1, 0, 0) + 1;
        }
        else if(v[idx] == 3)
        {   
            if(!gym)
            {
                ans =  min(vacation(v, idx + 1, 0, 1), vacation(v, idx + 1, 0, 0) + 1 );
            }
            else if(!contest) // If last contest was 0, then i can do contest today
            {
                ans = min( vacation(v, idx + 1, 1, 0) , vacation(v, idx + 1, 0, 0) + 1 );
            }
            else
            {
                ans =min(vacation(v,idx+1, 1, 0), min(vacation(v,idx, 0, 1), 1+vacation(v,idx+1, 0, 0)));
            }
        }
            dp[idx][gym][contest] = ans;
            return dp[idx][gym][contest];
    }

    int main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    memset(dp, -1, sizeof(dp));

    // Possible choices
    //  0 - Rest, no other option
    //  1 - Either do contest or do rest. We want to minimize
    // 2 - Either do gym or rest
    //  3 - Either do the contest or gym depending on the previous state
    //   Try out all the possibilities.
    int idx = 0;
    int contest, gym;
    contest = gym = 0; // Not sure

    cout << vacation(v, idx, contest, gym) << endl;
    }

