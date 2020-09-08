#include<bits/stdc++.h>
/*
If m<min(a,b),n+m≤a+b are satisfied, the answer is "Yes". Otherwise, the answer is "No". Let's proof it.

Of course, n+m≤a+b must be satisfied, because violating this inequality means lack of cookies.

When a type 2 guest comes, or when a=b, the value of min(a,b) is decremented by 1.

You need to consider only about the case that all type 2 guests come first and after that all type 1 guests come, because if there is a type 1 guest before a type 2 guest, swapping them is better to make no one angry. (Because if there is a type 1 guest before a type 2 guest, the type 1 guest have a possibility to decrease the value of min(a,b) unnecessarily.)
*/
#define lli long long int


using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--)
   {
     lli a, b, n , m;
     cin >> a >> b >> n >> m;
     
    

        if(a + b < n + m)
        {
            cout << "NO" << endl;
        }
        else if(m <= min(a,b) ) {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
          }
   
}