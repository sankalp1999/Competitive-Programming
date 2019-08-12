#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    long long int i, j, k ;
    cin >> i >> j >> k;
    long long int l, l1;
    l = ceil((long long float)i/k);
    l1 = ceil((long long float)j/k);

    long long int ans = l * l1;
    cout << ans;
    return 0;
    
    
}