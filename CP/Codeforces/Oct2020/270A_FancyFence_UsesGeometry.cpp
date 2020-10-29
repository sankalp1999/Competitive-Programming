#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		
		int k;
		cin >> k;
		// cout << n << endl;
		int flag = 0;
	    
        // All the exterior angle for a polygon sum upto 360.
        // For a regular polygon, all the 180 - a are equal.
        // So, ( 180 - a ) == 360/n holds
        // Just check mod 

		if(360%(180-k) == 0)
        {
            cout << "YES" << endl;
        }
        else
			cout << "NO" << endl;
	}	
	return 0;
}