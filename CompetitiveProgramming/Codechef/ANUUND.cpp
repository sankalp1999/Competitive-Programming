#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
typedef long long int ll ;
int main()
{   ll x , i ;
    cin >> x ;
    while(x--)
    {   int n; 
        cin >> n ; 
        vector<long int > v ;
        
        for(i=0;i<n;i++)
        {
            int t; 
            cin >> t ; 
            v.push_back(t);

        }
        
        sort(v.begin(),v.end());
        int j = 0 ;
        
        for(i=0;i<v.size()-1;i++)

        {
          if (i%2 == 1)
          {
            if (v[i] < v[i+1]){ swap(v[i],v[i+1])  ;} 
          }
          
        }
        for(i=0;i<v.size();i++)
        {
            cout << v[i] << " " ;
        }


    }
    return(0);
}