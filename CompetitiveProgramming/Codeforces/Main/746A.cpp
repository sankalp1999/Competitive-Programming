#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    long long int a, b, c ;
    long long int count = 0 ; 
    cin >> a >> b >> c ;
    while(a > 0 && b > 1 && c > 3  )
    {
        a = a - 1 ; 
        b = b - 2 ;
        c = c -4  ; 
        count = count + 7;
    }
    cout << count << endl;
    
    
    
}