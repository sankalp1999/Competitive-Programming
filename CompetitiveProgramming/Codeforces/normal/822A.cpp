// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    int fact[] = {1,2,6,24,120,720,5040, 40320, 362880, 3628800, 39916800,479001600};
    cout << fact[min(a,b) - 1 ] << endl;


}