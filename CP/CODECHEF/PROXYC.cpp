#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <cstdlib>
typedef long long int ll; 
using namespace std;
int main()
{
    ll n;
    cin >> n;

    while (n--)
    {   
    	ll count =0 ; // count 
        ll d; // string size
        cin >> d;
        int flag = 0 ;
        string at;
        cin >> at;
        double abse;
        ll count2 = 0 ;
        for (char const &c: at) {
            if (c == 'A')
            {
                count++;
            }
                                }
         abse  = (float)(count+count2)/(float)d;   

		if (abse > 0.25)
		{
		

			for(auto it = at.begin() + 2 ;it <= at.end() - 3;++it)
			{
				if (*it == 'A')
				{	if (((*(it+1) == 'P')&&((it+1)<at.end()) )||( (*(it+2) == 'P')&&((it+2)<at.end())))
				{
				
					 
				
				if ( ((it-1)>=at.begin()) || ((it-2)>=at.begin()))
				{
					if( (*(it-1) == 'P') || *(it-2) == 'P')
					{
							count2--;
					 abse  = (float)(count+count2)/(float)d;
					}
				}
				}
				}
				if (abse <= 0.25)
					{
						count2 = abs(count2);
						flag = 1 ;
					
						break;
					}
				
			}
			if (flag == 0)
			{
				
				cout << -1 << endl;
				
			}
			else 
			{
				cout << count2 << endl ; 
			}
		}
	
		else
		{
			cout << 0 << endl ;
		}
    }	
    return 0;

}