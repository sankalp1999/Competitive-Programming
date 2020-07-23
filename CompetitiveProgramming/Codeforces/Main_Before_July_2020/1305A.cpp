// Example program
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
    int n;
    cin >> n;
    int d[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> d[i];
    }
    int b[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> b[i];
    }
    sort(d, d+n);
    sort(b, b+n);
    for(int i = 0 ; i < n; i++)
    {
        cout << d[i] << " " ;
    }
    cout << endl;
    for(int i = 0 ; i < n; i++)
    {
        cout << b[i] << " " ;
    }
    cout << endl;
       
       
   }
}