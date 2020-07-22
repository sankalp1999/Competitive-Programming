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
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
#define N 101

long long int arr[N][N], I[N][N];
void multiply(int a[][N], int b[][N], int dim)
{
    long long int res[dim + 1][dim + 1];
    for(int i = 0;i < dim; i++)
   {
       for(int j = 0; j < dim; j++)
       {
            res[i][j] = 0;
            for(int k = 0; k < dim; k++)
            {
                res[i][j] = res%mod + ((a[i][k]%mod) * (b[k][j]%mod))%mod;
            }
       }
   }
   REP(i,dim) REP(j,dim) a[i][j] = res[i][j] ;// since we want to return arr

}
void printMat(int arr[][N], int dim)
{
    REP(i, dim)
    {
        REP(j, dim)
            cout << arr[i][j]%mod << " ";
        cout << endl;
    }
}

void power(int arr[][N], int dim, int n)
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

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {

    int dim, n;
    cin >> dim >> n;
    REP(i,dim) REP(j,dim) cin >> arr[i][j];
    //cout << "Entered matrix is as : " << endl;
 //   printMat(arr, dim);
  //  cout << "Enter the power to which you want to raise." << endl;
    power(arr, dim, n);
    printMat(arr, dim);

    }
}
