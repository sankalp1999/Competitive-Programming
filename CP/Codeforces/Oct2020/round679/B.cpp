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
       vector<vector<int>> v;

       int flag = 0;
       int first = 0;
       for (int i = 0; i < n; i++)
       {
           vector<int> temp(m);
           for (int j = 0; j < m; j++)
           {
               
               cin >> temp[j];
               if(flag == 0)
               {
                   first = temp[j];
                   flag = 1;
               }
           }
           v.push_back(temp);
       }
       int flag2 = 0;
       vector<int> impo;
       while (m--)
       {
           vector<int> p(n);
           for (int i = 0; i < n; i++)
           {
               cin >> p[i];
               if(p[i] == first && flag2 == 0)
               {
                   flag2 = 1;
               }
           }
           if(flag2 == 1)
           {
               int k = 0;
               for (int i : p)
               {
                   impo.push_back(i);
               }
                      }
       }
       int visited[v.size()] = {0};


       for (int i = 0; i < impo.size(); i++)
       {

           for (int j = 0; j < v.size(); j++)
           {
               if((v[j][0] == impo[i]) && visited[j] == 0)
               {

                   for (int k = 0; k < v[j].size(); k++)
                   {
                       cout << v[j][k] << " ";
                   }
                 cout << endl;
                       visited[j] = 1;
               }
            
           }
             
       }
   }
}