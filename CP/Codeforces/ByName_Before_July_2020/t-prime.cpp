#include <iostream>
#include <cmath>
#include <vector>
using namespace std ; 
void tprime(long int n )
{
    int i , j , factor ; 
    factor  = 0  ; 
    long int a = 0 ; 
    long int b = 0 ;
    float square_root = sqrt(n); 
    for(i=1;i<=ceil(square_root);i++)
    {
        if (n%i == 0 )
        {
            if (ceil(square_root == floor(square_root)) && i == int(square_root))
            {factor = factor + 1 ;}
            else {factor = factor + 2 ; } 
        }
    }
        if (factor == 3 )
        {
            cout << "YES\n";
        }
        else if (factor != 3 )
        {
            cout << "NO\n" ; 
        }
    }





int main()
{
    long int o ;
    long int i ; 
    long int p ; 
    vector<long int> vect ; 
    cin >> o ; 
    for(i=0;i<o;i++)
    {
        cin >> p ; 
        vect.push_back(p) ;  
    } 
for(i=0;i<vect.size();i++)
{
    tprime(vect[i]) ; 
}    


return(0);

}