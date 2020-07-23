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


bool isPrime[1000002];
void sieve(int N) {
     
        for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
             if(isPrime[i] == true) {                    //Mark all the multiples of i as composite numbers
                 for(int j = i * i; j <= N ;j += i)
                     isPrime[j] = false;
            }
        }
    }



int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   sieve(1000001);
   if( n == 1 || n == 2)
   {
       cout << 1 << endl;
       if(n == 1)
        cout << 1 << endl;
       else
       {
           cout << 1 << " " << 1 << " ";
       }
       return 0;
   }
   cout << 2 << endl;
   for (int i = 2; i <= n + 1; i++)
   {
       if(isPrime[i])
       {
           cout << 1 << " ";
       }
       else
       {
           cout << 2 << " ";
       }
    }
    return 0;
}