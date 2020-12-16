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

vector<vector<int>> res;
// Print everything + 1
void solve4(vector<string>& v, int i, int j)
{
    int dx[] = {0, 0, 1, 1};
    int dy[] = {0, 1, 0, 1};
    vector<int> temp;
    int oa = 3;

    for (int k = 0; k < 4; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if(v[x][y] == '1' && oa > 0)
        {
            v[x][y] == '0';
            temp.push_back(x);
            temp.push_back(y);
            oa--;
        }
      
    }
    res.push_back(temp);
}

void solve3(vector<string>& v, int i, int j)
{
    int dx[] = {0, 0, 1, 1};
    int dy[] = {0, 1, 0, 1};
    vector<int> temp;

    int za = 2;
    int oa = 1;

    for (int k = 0; k < 4; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if(v[x][y] == '1' && oa > 0)
        {
            v[x][y] == '0';
            temp.push_back(x);
            temp.push_back(y);
            oa--;
        }
        else if(v[x][y] == '0' && za > 0 )
        {
            v[x][y] == '1';
            temp.push_back(x);
            temp.push_back(y);
            za--;
        }
    }
    res.push_back(temp);
}



void solve1(vector<string>& v, int i, int j)
{
    int dx[] = {0, 0, 1, 1};
    int dy[] = {0, 1, 0, 1};
    // three ones
    vector<int> temp;

     for (int k = 0; k < 4; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if(v[x][y] == '1')
        {
            v[x][y] == '0';
            temp.push_back(x);
            temp.push_back(y);
        }
    }
    res.push_back(temp);
}


void solve2(vector<string>& v, int i, int j)
{
    int dx[] = {0, 0, 1, 1};
    int dy[] = {0, 1, 0, 1};

    vector<int> temp;

    int oa = 1;
    int za = 2;
    for (int k = 0; k < 4; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if(v[x][y] == '1' && oa>0)
        {
            v[x][y] == '0';
            temp.push_back(x);
            temp.push_back(y);
            oa--;
        }
        else if(v[x][y] == '0' && za>0)
        {
            v[x][y] == '1';
            temp.push_back(x);
            temp.push_back(y);
            za--;
        }
    }
    res.push_back(temp);
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
       vector<string> v;
       res.clear();
       for (int i = 0; i < n; i++)
       {
           string temp;
           cin >> temp;
           v.push_back(temp);
       }
       int count = 0;
       
       for (int i = 0; i < n - 1; i++)
       {
           for (int j = 0; j < m - 1; j++)
           {
               int ones = 0;
               int zeros = 0;
               int dx[] = {0, 0, 1, 1};
               int dy[] = {0, 1, 0, 1};
               for (int k = 0; k < 4; k++)
               {
                   int x = dx[k] + i;
                   int y = dy[k] + j;
                   
                   if(v[x][y] == '1')
                   {
                       ones++;
                   }
                   else
                   {
                       zeros++;
                   }
               }
                 if(ones == 3)
                 {
                     solve1(v, i, j);
                 }
                 else if(ones == 2 && zeros == 2)
                 {
                     solve2(v, i, j);
                     solve1(v, i, j);
                 }
                 else if(zeros == 3)
                 {
                     solve3(v, i, j);
                     solve2(v, i, j);
                     solve1(v, i, j);
                 }
                 else if(ones == 4)
                 {
                     solve4(v, i, j);
                     solve3(v, i, j);
                     solve2(v, i, j);
                     solve1(v, i, j);
                 }
                 
              
           }
       }
       cout << res.size() << endl;
       for (int i = 0; i < res.size(); i++)
       {
           for(int j : res[i])
           {
               cout << j + 1 << " ";
           }
           cout << endl;
       }
   }
}

