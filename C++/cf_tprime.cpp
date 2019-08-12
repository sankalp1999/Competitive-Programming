#include <iostream>
#include <cmath>
#include <vector>
using namespace std ; 
void tprime(long long int n )
{
    long long int i , j ;  
    int flag = 0 ;  
 //   int a = 0 ; 
 //   int b = 0 ;
     long double square_root = sqrt(n);
    
    if (n == 0 || n== 1)
    {
        cout << "NO\n";
    }
    else if (n ==2 || n==3      )
    {
        cout << "NO\n";
    }
    else if (ceil(square_root) == floor(square_root)) { 
         long long int ch = int(square_root); 
    for(i=2;i<ceil(ch);i++)
    {   
        if (ch%i == 0 )
        {
            flag =1 ; 
            cout << "NO\n"; 
            break; 
        }
    }     
      if (flag == 0 )
      {
          cout << "YES\n"; 
      }      

    }
    else{ cout << "NO\n"; }
}





int main()
{
    long long int  p ; 
    long long int i ; 
    long long int o ;
    vector<long int> vect ; 
    cin >> o ; 
    for(i=0;i<o;i++)
    {
        scanf("%d",&p) ;
        vect.push_back(p) ;
      //  cout << vect[i] ; 
    } 
for(i=0;i<vect.size();i++)
{
    tprime(vect[i]) ; 
}    

return(0);


}