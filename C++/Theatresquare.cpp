#include <cstdio>
#include <iostream>

/*
 rectangular shape of n*m
 a * a
*/
using namespace std;

int main()
{
    int i, j, k, c1, c2;
    c1 = 0;
    c2 = 0;

    cin >> i >> j >> k;
    while(i>=0)
    {
        i = i - k;
        c1++;
        if (i ==0)
        {
            break;
        }
    }
     while(j>=0)
    {
        j = j - k;
 
        c2++;
        if (j ==0)
        {
            break;
        }
    }
    int ans = c1 + c2;
    cout << ans;

}