#include <bits/stdc++.h>

using namespace std;

// Complete the stepPerms function below.

  
long long int stepPerms(int n) {
    long long int dp[100002] = {0};
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    if(n < 4)
    {
        return dp[n];
    }
    long long int mod =  10000000007;
                        
    for(int i = 4;i <=  n; i++)
    {
        dp[i] = (dp[i-1]%mod + dp[i-2]%mod + dp[i-3]%mod)%mod;
    }
    return dp[n];

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long long int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
