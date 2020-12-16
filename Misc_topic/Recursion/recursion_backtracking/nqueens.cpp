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
const int M = 100;
using namespace std;

bool is_attacked(int board[][M], int row, int col, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(board[row][i] == 1)
            return true;
    }
    for (int i = 0; i < n; i++)
    {
        if(board[i][col] == 1)
            return true;
    }
    for (int p = 0; p < n; p++)
    {
        for (int q = 0; q < n; q++)
        {
            if(p + q == row + col)
            {
                if(board[p][q] == 1)
                    return true;
            }
            if(p - q == row - col)
            {
                if(board[p][q] == 1)
                    return true;
            }

        }
    }
    return false;
}

bool nqueens(int board[][M], int N, int n)
{
    if (N == 0) 
    {   
        return true; // N == 0 means that a path has been found the state space tree
                     // or a solution has been found
    }
    // DFS
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if( is_attacked(board, i, j, n))
            {
                continue;
            }
            board[i][j] = 1;
            // cout << "reached till here" << endl;
            if (nqueens(board, N - 1, n))
                return true;
            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int board[M][M];
    int N = n;
    REP(i, n)
        REP(j, n) 
            board[i][j] = 0;

            bool y = nqueens(board, N, n);
    if(y == false)
        cout << "NO" << endl;
    else if (y == 1)
        cout << "YES" << endl;
        REP(i,n)
        {
            REP(j,n)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        
}