#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    long long int sum1;
    
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int n2 = n ;
        long long int sum2 = 0;
        long long int rem; 
        while (n2 != 0)
        {
            rem = n2 % 10;
            sum2 = sum2 + rem;
            n2 = n2 / 10;

        }
       // cout << sum2 << " here "<< endl ;
        sum2 = sum2 % 10;
        if (sum2 == 0)
        {
            sum2 = 0;
        }
        else 
        {sum2 = 10 - sum2;}
      //  cout << sum2 << endl;
        cout << n << sum2 << endl;
    }
    return 0; 
}