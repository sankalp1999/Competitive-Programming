    #include <bits/stdc++.h>
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

    const double PI = 3.141592653589793238460;


    long long gcd(long long int a, long long int b)
    {
    if (b == 0)
        return a;
    return gcd(b, a % b);
    }
    
    // Function to return LCM of two numbers 
    long long lcm(int a, int b)
    {
        return (a / gcd(a, b)) * b;
    }
    

    using namespace std;
    int main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int lena, lenb;


        
        lena = a.size();
        lenb = b.size();
        
        if(lena < lenb) // a is bigger
        {
            swap(a, b);
            swap(lena, lenb);
        }
        


        lli lcmnum = lcm(lena, lenb);

    string temp = a;
        while (a.size() < lcmnum)
        {
          a += temp;
        }

        int flag = 0;
    
        for (int i = 0; i < a.size() ; i += lenb)
        {
            if(a.substr(i,lenb) == b)
            {
                continue;
            }
            else
            {
                cout << -1 << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout << a << endl;
        }
    }
    }