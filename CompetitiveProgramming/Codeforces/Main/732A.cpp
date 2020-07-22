#include <iostream>
using namespace std;
int main()
{
    int k, r ;
    cin >> k >> r ;
  

    if ((k - r) % 10 == 0)
    {
        cout << 1 << endl;
    }
    else 
    {
        int i = 1;
        while (1)
        {
            int y = k * i - r;
            int z = k * i;

            if (z % 10 == 0)
            {
                cout << i << endl;
                break;
            }
            if (y%10 == 0)
            {
                cout << i;
                break;
            }
            i++;
        }
    }
}