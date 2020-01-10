#include <iostream>
using namespace std;
// simplest case when no choices remain at all
int C(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    else
    {
        return C(n-1, k) + C(n-1, k- 1);
    }
} 