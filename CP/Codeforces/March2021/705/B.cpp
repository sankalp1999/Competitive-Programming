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

vector<int> t = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};


int get(int M)
{   

    // Reverse and check if reflection is valid or not.
    string temp = to_string(M);
    if((int)temp.size() == 1)
        temp = "0" + temp;
    string res = "";
    // IF you process from reverse, then automatically reveresed
    // Also easy check for valid number 
    for (int i = 1; i >= 0; i--)
    {
        if (t[temp[i] - '0'] == -1)
            return 1000;
        res += char(t[temp[i] - '0'] + '0');
    }
    return stoi(res);
}

string good(int M)
{
    string temp = to_string(M);
    if (temp.size() == 1)
    {
        return "0" + temp;
    }
    return temp;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t, h, m, H, M;
   cin >> t;
   string s;
   while (t--)
   {
       cin >> h >> m;
       cin >> s;
       H = (s[0] - '0') * 10 + s[1] - '0';
       M = (s[3] - '0') * 10 + s[4] - '0';
       // It's better to work in int and then convert to 
       // string and not vice-versa which I did during contest
       
       // Note, the editorial solution focuses on really
       // simulating the real motion of the clock which 
       // is easier to make sense of. I complicated things badly.
       while(1)
       {
           if(M == m)
           {
               H++;
               M = 0; // Yeah, just mod.
           }
           if(H == h)
           {
               H = 0; // same thing.
           }
           // Mirror image and shifting 
           if(get(M) < h && get(H) < m)
           {
               cout << good(H) << ":" << good(M) << endl;
               break;
           }

           M++; // Go to the next minute;
       }
   }
}