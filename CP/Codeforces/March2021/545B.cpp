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
   string s1, s2;
   cin >> s1 >> s2;
   int n = s1.size();
   int count = 0;
   for (int i = 0; i < n; i++)
   {
       if(s1[i] != s2[i])
       count++;
   }
   if (count & 1) // if count is odd, this means i cannot
       //create distance since only "Unequal" bits add to the
       //distance. Equal bits will produce only equidistance.
       //between p and (s, t);
    {
        cout << "impossible" << endl;
    }
    else
    {
        int flip = 0;
        string res = "";
        for (int i = 0; i < n; i++)
        {
            if(s1[i] == s2[i])
            {
                res += s1[i];
            }
            else{
                if(flip == 0)
                {
                    res += s1[i];
                    flip = 1;
                }
                else
                {
                    res += s2[i];
                    flip = 0;
                }
            }
        }

        cout << res << endl;
    }
}