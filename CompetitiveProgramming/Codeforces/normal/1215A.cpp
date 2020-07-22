#include <iostream>
using namespace std;
int main()
{
    int a1, a2, k1, k2;
    cin >> a1 >> a2 >> k1 >> k2;
    int n ;
    cin >> n ;
    int temp = n ;
    int maxcount = 0;
    int lol, lol2, a, other;
    lol = min(k1,k2);lol2 = max(k1,k2);
   // a =   max(a1,a2) ;

    if(lol == k1){a =a1;
    other = a2;
        }
    else{a = a2;
    other = a1;
        }


    while(a > 0 && n > 0)
    {
        n = n - lol;
        a--;
        if(n>=0)maxcount++;

    }

    if(a == 0)
    {
      while(n > 0 && other > 0  )
    {
        n = n - lol2;
        other--;
        if(n>=0)maxcount++;
       // cout << n << " ";
    //    if(n < 0){break;}

    }
    }

    int mincount = 0 ;
    int mid = temp - a1*(k1-1) - a2*(k2-1);
    if(mid <= 0){cout << 0 << " ";}
    else{cout << mid << " ";}
    cout << maxcount;

    return 0;



}