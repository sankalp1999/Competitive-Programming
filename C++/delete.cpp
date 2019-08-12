#include <iostream>
#include <cstdio>
#include <vector>
using namespace std ; 
int main()
{
    
    int n, i  , p ,flag,j ; 
    cin >> n ;
    cout << n ; 
    int vect[n] ;
    //vector<int> ans ; 
    for(i=0;i<n-1;i++)
    {   
        scanf("%d",&vect[i]);
        //vect.push_back(p) ; 
        printf("hello");
    }
    printf("reache dher ");
    for(i=1;i<n;i++)
    {   flag = 1 ; 
        for(j=i+1;i<n;j++)
        {
            if (vect[i] < vect[j])
            {
                flag=0 ;
            }
            
        }if (flag ==1 )
        {
            printf("%d ",vect[i]);
            
        }
        
    }    
    return(0);
    
    
    
    
    
    
}