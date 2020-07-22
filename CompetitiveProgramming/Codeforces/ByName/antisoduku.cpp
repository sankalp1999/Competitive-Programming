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
// sankalp shubham
char arr[9][9];
void check(int x, int i, int j)
{
    int f = 0;
    for (int k = 0;k < 9; k++)
    {
        if(arr[i][j] == x && k != i )
        {   
            if(x > 1)
            {
                arr[i][j]--;
            }
            else if(x < 9)
            {
                arr[i][j]++;
            }
        }
    }
}
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--)
   {
       
       for (int i = 0; i < 9; i++)
       {
           for (int j = 0; j < 9; j++)
           {
               cin >> arr[i][j];
           }
       }
       arr[0][0] = arr[0][1];
       check(arr[0][0], 0, 0);
       arr[1][3] = arr[1][4];
       check(arr[1][3], 1, 3);
       arr[2][6] = arr[2][7];
       check(arr[2][6], 2, 6);

       arr[3][0] = arr[3][1];
       check(arr[3][0], 3, 0);
       arr[4][3] = arr[4][4];
       check(arr[4][3], 4, 3);
       arr[5][6] = arr[5][7];
       check(arr[5][6], 5, 6);


       arr[6][0] = arr[6][1];
       check(arr[6][0], 6, 0);
       arr[7][3] = arr[7][4];
       check(arr[7][3], 7, 3);
       arr[8][6] = arr[8][7];
       check(arr[8][6], 0, 0);
       cout << endl;
       for (int i = 0; i < 9; i++)
       {
           for (int j = 0; j < 9; j++)
           {
               cout <<  arr[i][j];
           }
           cout << endl;
       }
   }
   return 0;
}