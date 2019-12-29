#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    int n, c ;
    cin >> t ;
    // n is tot no of elephants
    // c is tot no of candies
    while(t--)
    {
     cin >> n >> c ;
     long long int sum ;
     sum = 0;
     long long int temp = 0 ;
     while(n--)
     {
     cin >> temp ;
     sum = sum + temp ;
     }
     if (sum > c)
     {
        cout << "No" << endl;
     }
    else{
        cout << "Yes" << endl;
    }



    }


return(0);



}
