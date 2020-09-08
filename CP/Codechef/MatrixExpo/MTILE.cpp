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
const double PI = 3.141592653589793238460;

using namespace std;
#define N 2

lli arr[N][N];
lli I[N][N];
void multiply( lli a[][N], lli b[][N], int dim)
{
    lli res[dim + 1][dim + 1];
    for(int i = 0;i < dim; i++)
   {
       for(int j = 0; j < dim; j++)
       {
            res[i][j] = 0;
            for(int k = 0; k < dim; k++)
            {
                res[i][j] = (res[i][j]%mod + ((a[i][k]%mod) * (b[k][j]%mod))%mod)%mod;
            }
       }
   }
   REP(i,dim) REP(j,dim) a[i][j] = res[i][j] ;// since we want to return arr

}
void printMat( lli arr[][N], int dim)
{
    REP(i, dim)
    {
        REP(j, dim)
            cout << arr[i][j]%mod << " ";
        cout << endl;
    }
}
void power( lli arr[][N], int dim, lli n)
{
    REP(i, dim)
        {
            REP(j,dim)
            {
                if(i == j)I[i][j] = 1;
                else I[i][j] = 0;
            }
        }
    while(n)
    {
        if(n % 2)
        {
            multiply(I, arr, dim);
            n--;
        }
        else
        {
            multiply(arr , arr, dim) ;
            n = n/2;
        }
    }
    REP(i, dim) REP(j, dim) arr[i][j] = I[i][j];
}
lli fib(lli n)
{

                    // transition matrix
    lli fibmat[2][1];
    fibmat[0][0] = 1;
    fibmat[0][1] = 0;

    arr[0][0]=1;
    arr[0][1]=1;
    arr[1][0]=1;
    arr[1][1]=0;
    power(arr, 2, n);
    // printMat(arr, 2);
    lli res2[2][1];
    for(int i = 0; i < 2 ;i++)
    {
        for(int j = 0;j < 1; j++)
        {
            res2[i][j] = 0;
            for(int k = 0; k < 2; k++)
            {
                res2[i][j] += arr[i][k]*fibmat[k][j];

            }
        }
    }
    return res2[0][0];

}
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        lli n;
        cin >> n;
        cout << fib(n) << endl; // Using Matrix Exponentiation


    }
}
