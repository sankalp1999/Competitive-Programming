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
bool compare(pair<string,vector<int>>& a, pair<string,vector<int>>& b)
{
    if(a.second[0] != b.second[0])
    {
        return a.second[0] > b.second[0];
    }
    if(a.second[2] - a.second[1] != b.second[2] - b.second[1])
    {
        return a.second[1] - a.second[2] > b.second[1] - b.second[2];
    }
    return a.second[1] > b.second[1];
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   lli n = t;
   unordered_map<string,vector<int>> m;
   for (int i = 0; i < t; i++)
   {
      
       string s;
       cin >> s;
       m[s].push_back(0);
       m[s].push_back(0);
       m[s].push_back(0);
   }
   string p;
   n = (n * (n - 1) )/ 2;
   while(n--)
   {
       string s, num;
       cin >> s >> num;
       int i = 0;
       string a, b;
       a = b = "";
       while(s[i]!='-')
           a += s[i++];
       i++;
       while(i<s.size())
           b += s[i++];
       int num1, num2;
       i = 0;
       string temp1, temp2;
       temp1 = temp2 = "";
       while (num[i] != ':')
           temp1 += num[i++];
       i++;
       while(i<num.size())
           temp2 += num[i++];
       num1 = stoi(temp1);
       num2 = stoi(temp2);
       m[a][1] += num1;
       m[b][1] += num2;
       m[a][2] += num2;  // Earlier, question was not clear.
       m[b][2] += num1; // Missed goals means goals that you missed
       if (num1 == num2)
       {
           m[a][0]++;
           m[b][0]++;
       }
       else if(num1 > num2)
       {
           m[a][0] += 3;
       }
       else
       {
           m[b][0] += 3;
       }
      }
      vector<pair<string, vector<int>>> res;
      for (auto it = m.begin(); it != m.end(); it++)
      {
          res.push_back(*it);
      }
      sort(res.begin(), res.end(), compare);
      vector<string> res2;
      for (int i = 0; i < t / 2; i++)
      {
        //   cout << res[i][0] << endl;
        res2.push_back(res[i].first);
      }
      sort(res2.begin(), res2.end());
      for(string s : res2)
      {
          cout << s << endl;
      }

      return 0;
}
