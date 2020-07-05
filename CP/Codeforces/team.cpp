#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i, n, c ;
    cin >> n;
    c = 0;
    for (i = 0; i < n; i++)
    {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        if (t1 == 1 && t2 == 1 && t3 == 1)
        {
            c++;
        }
        else if (t2 == 1 && t3 == 1)
        {
            c++;
        }
        else if (t1 == 1 && t3 == 1)
        {
            c++;
        }
        else if (t1 == 1 && t2 == 1)
        {
            c++;
        }
    }
    cout << c << endl;
    return(0);
}