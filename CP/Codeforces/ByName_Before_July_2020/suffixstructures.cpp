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
   string s, t;
   cin >> s >> t;
   if(s.size() < t.size())
   {
       cout << "need tree" << endl;
       return 0;
   }
   int k = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (t[k] == s[i])
        {
            k++;
        }
    }
    if(k == t.size())
    {
        cout << "automaton" << endl;
        return 0;
    }
   

   int count[26] = {0};
   int count2[26] = {0};
   for (char c : s)
   {
       count[c - 'a']++;
   }
   for(char c : t)
   {
       count2[c - 'a']++;
   }
   bool f = false;
   for (int i = 0; i < 26; i++)
   {
       if(count2[i] != 0)
       {
           if(count2[i] > count[i])
           {
               f = true;
           }
       }
   }

   if(!f && (s.size() > t.size()))
   {
       cout << "both" << endl;
       return 0;
   }
   else if(!f && (s.size() == t.size() ))
   {
       cout << "array" << endl;
       return 0;
   }

   cout << "need tree" << endl;
   return 0;
}