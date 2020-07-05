#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;
int main()
{
    int n ;
    cin >> n; // length of the number of events remembered,
    string s; 
    cin >> s ;
    vector<long long int> v(10, 10);
    int k, j ;
    
    j = 9;
    for (char i : s)
    {
        if ( i == 'L')
        {
            k = 0 ;
            while (k < 10 )
            {

                if (v[k] == 10)
                {
                    v[k] = 1;
                    
                    break;
                }
                
                k++;
              
           }
           
        }
        if (i == 'R')
        {
           j = 9 ; 
            while(j >= 0 )
           {
               
               if (v[j] == 10)
               {
                   v[j] = 1;
                   break;
               }
               j--;
           }
        }

        if (i >=  '0'  &&  i <= '9')
        {
            
            v[ i - int('0') ] = 10;
            
        }
    }
    int i; 
    for (i = 0; i < v.size(); i++)
    {
        if (v[i] == 10)
        {
            cout << 0;
        }
        
        else
        {cout << v[i];}
    }

    return (0);

}