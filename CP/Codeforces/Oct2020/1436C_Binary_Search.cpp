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

// Modular arithmetic
lli add(lli x, lli y) {
	x += y;
	if (x >= mod) return x - mod;
	return x;
}
lli sub(lli x, lli y) {
	x -= y;
	if (x < 0) return x + mod;
	return x;
}
lli mult(lli x, lli y) {
	return (x * y) % mod;
}
// lli bin_pow(lli x, lli p) {
// 	if (p == 0) return 1;
// 	if (p & 1) return mult(x, bin_pow(x, p - 1));
// 	return bin_pow(mult(x, x), p / 2);
// }
// lli rev(lli x) {
// 	return bin_pow(x, mod - 2);
// }

lli C[1001][1001];

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n, x, pos;
   cin >> n >> x >> pos;
   
   lli greater = n - x;
   lli smaller = x - 1;

   lli fact[n + 1];
   fact[0] = 1;
   for (int i = 1; i <= n; i++)
   {
       fact[i] = mult(fact[i - 1] ,i);
   }
   C[0][0] = 1;
   for (int i = 1; i <= n; i++)
   {
       C[i][i] = C[i][0] = 1;
       for (int j = 1; j <= n; j++)
       {
           C[i][j] = add(C[i - 1][j - 1], C[i - 1][j]);
       }
   }
   lli left = 0;
   lli right = n;

   lli hasBig = 0;
   lli hasSmall = 0;
   

   /* This question tests the knowledge of binary search.
   In the binary search algo, even if the array is not sorted, still 
   sometimes due to certain permutation of elements, we may be able
   to find element.
   i.e if for example,       1 5 3 6 4
   just suppose our middle lands on 6, then 6 > 5, then middle is directed towards the 
   left part of the array.

   So, if in this question, we simulate the binary search and find on which mids the algo 
   lands. Compare that to the position that is given to us.

   If it lands on a position to the right, this means we want a number 
   bigger than the number given(To direct it towards the left direction).

   Otherwise, if it lands to the left of pos, then we need a smaller number x
   to direct it towards the right direction.

   Thus, we need to fill those positions using nCr logic. And rest of the remaining positions 
   can be just permuted.
   */ 


   while (left < right)
   {
       lli middle = (left + right) / 2;
       if (middle < pos)
       {
           hasSmall++; // send it to right
           left = middle + 1;
       }
       else if (middle == pos)
       {
           left = middle + 1;
       }
       else if (middle > pos)
       {
           // Send to towards left. This happens when we
           // have something bigger than x
           hasBig++;
           right = middle;
       }
        
    }
      
    lli bigways = C[greater][hasBig];

    bigways = mult(bigways, fact[hasBig]); // First select and then Permute in hasBig ways

    lli smallways = C[smaller][hasSmall];
    smallways = mult(smallways, fact[hasSmall]);

    lli total = mult(bigways, smallways) ;
    
    cout << mult(total, fact[n - 1 - hasSmall - hasBig]); // Arrange/Permute other positions (No selection required for these)
}