#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007ll

int main()
{
 
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    long long int k = 1 ;
    vector<long long int > v ;
    while(k*(k+1)/2  < 20000000000)
    {
        v.push_back(k*(k+1)/2);
        k++;
        // cout << k * (k + 1) / 2 << " ";
    }
    
    while(t--)
    {
    	int n, k;
        cin >> n >> k;
        std::string s (n, 'a');
        auto pos = lower_bound(v.begin(), v.end(), k);
        // int val = *lower_bound(v.begin(), v.end(), k);
        
        int p = distance(v.begin(), pos) + 1;
        // cout << v[p] << " ";
        int val = v[p - 1];
        int p2 = p - 1;
        // cout << " val : " << val << endl;
        s[s.size() - p - 1] = 'b';
        s[n - (p2 - (val - k)) - 1] = 'b';
        cout << s << endl;
    }

    return 0;
}