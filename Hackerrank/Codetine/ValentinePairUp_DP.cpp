#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[5001][5001];
#define MAX  1000000

ll valentine(vector<ll> &choc,vector<ll> &candy,ll i,ll j ){
    if(i == (int)choc.size()){
        return 0 ;
    }
    if(j == (int)candy.size()){
        return MAX;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    ll diff = abs(choc[i] - candy[j]) ;
    ll q1 = valentine(choc,candy,i+1,j+1) + diff;     
    ll q2 = valentine(choc,candy,i,j+1) ;                 

    dp[i][j] = min(q1,q2);

    return dp[i][j]; 
}


int main() {
    
    int n, m;
    cin >> n >> m;
    vector<ll> girls(n); // keep everything ll to be on safe side.
    vector<ll> boys(m);

    for(int i = 0; i <= 5000; i++) // Trying to check bounds
    {
        for(int j = 0; j <= 5000; j++)
        {
            dp[i][j] = -1;
        }
    }
    for(int i = 0; i < (int)girls.size(); i++)
    {
        cin >> girls[i];
    }
    for(int i = 0; i < (int)boys.size(); i++)
    {
        cin >> boys[i];
    }
    sort(girls.begin(), girls.end());
    sort(boys.begin(), boys.end()); 
    
    cout << valentine(girls, boys, 0 ,0) << endl;
    
    return 0;
}
