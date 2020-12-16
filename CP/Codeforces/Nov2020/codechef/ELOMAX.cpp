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
       int n, m;
       cin >> n >> m;
       vector<int> v(n);
       vector<int> max_rating(n + 1, 10000);#include<bits/stdc++.h>
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

bool compare(pair<int,int>& a, pair<int,int>& b)
{
    if(a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--)
   {
       int n, m;
       cin >> n >> m;
       vector<int> v(n);
       vector<int> max_rating(n + 1, 10000);
       int arr[n][m];
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       for (int i = 0; i < n; i++)
       {
           int max_gain = INT_MIN;
           int rs = 0;
           int pos = 0;
           for (int j = 0; j < m; j++)
           {
               int temp;
               cin >> temp;
               rs += temp;
              
               arr[i][j] = v[i] + rs;
                if(arr[i][j] > max_gain )
               {
                   max_gain = arr[i][j];
                   max_rating[i] = j;
                   // Peak rating month has been calculated
               }
           }
           int apos = max_rating[i];
       }
       vector<pair<int,int>> ranks(n, make_pair(10000,10000));
       for (int i = 0; i < m; i++)
       {
           vector<pair<int, int>> scores;
           for (int j = 0; j < n; j++)
           {
               scores.push_back({arr[j][i],j});
           }
           sort(scores.rbegin(), scores.rend());

           int count = 0;
           int equal = 0;
           if(count < ranks[scores[0].second].first)
            {
                    ranks[scores[0].second].first = count;
                    ranks[scores[0].second].second = i;
            }
           for (int k = 1; k < scores.size(); k++)
           {
               int pt = scores[k].second;
               if (scores[k].first == scores[k - 1].first)
               {
                   equal++;
               }
               else
               {
                   count += equal + 1;
                   equal = 0;
               }

                if(count < ranks[pt].first)
                {
                    ranks[pt].first = count;
                    ranks[pt].second = i;
                }
           }
       }

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (ranks[i].second != max_rating[i])
        {
            res++;
        }
           }
           cout << res << endl;
   }
}
       int arr[n][m];
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       for (int i = 0; i < n; i++)
       {
           int max_gain = INT_MIN;
           int rs = 0;
           int pos = 0;
           for (int j = 0; j < m; j++)
           {
               int temp;
               cin >> temp;
               rs += temp;
              
               arr[i][j] = v[i] + rs;
                if(arr[i][j] > max_gain )
               {
                   max_gain = arr[i][j];
                   max_rating[i] = j;
                   // Peak rating month has been calculated
               }
           }
           int apos = max_rating[i];
       }
       vector<pair<int,int>> ranks(n, make_pair(10000,10000));
       for (int i = 0; i < m; i++)
       {
           vector<pair<int, int>> scores;
           for (int j = 0; j < n; j++)
           {
               scores.push_back({arr[j][i],j});
           }
           sort(scores.rbegin(), scores.rend());

           int count = 0;
           int equal = 0;
           if(count < ranks[scores[0].second].first)
            {
                    ranks[scores[0].second].first = count;
                    ranks[scores[0].second].second = i;
            }
           for (int k = 1; k < scores.size(); k++)
           {
               int pt = scores[k].second;
               if (scores[k].first == scores[k - 1].first)
               {
                   equal++;
               }
               else
               {
                   count += equal + 1;
                   equal = 0;
               }

                if(count < ranks[pt].first)
                {
                    ranks[pt].first = count;
                    ranks[pt].second = i;
                }
           }
       }

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (ranks[i].second != max_rating[i])
        {
            res++;
        }
           }
           cout << res << endl;
   }
}


