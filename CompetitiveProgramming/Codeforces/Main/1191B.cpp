#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c ;
	char a1, b1, c1 ;
	
	cin >> a >> a1 >> b >> b1 >> c >> c1 ; 
//	cout << a << a1 << b << b1 << c << c1 ;
	vector<int> vec ;
	vec.push_back(a);
	vec.push_back(b);
	vec.push_back(c);
	int count = 0 ;
	sort(vec.begin(),vec.end());
	
	
	if ( a1 == b1 && b1 == c1)
	{
		if (a == b && b ==c )
		{
			cout << "0";
			return (0);
		}
		
		if (vec[2] == vec[1] + 1 )
		{
			if (vec[1] == vec[0] + 1 )
			{
					cout << "0";
					return (0);
			}
			else
			{
				cout << "1"; // same number we will take again
				return (0);
			}
		}
		else 
		{
			
			// one is faulty
				if (vec[1] == vec[0] + 1 )
			{
					cout << "1" ; // still only one change needs to be done 
					return (0);
			}
			else if ( vec[1] == vec[0] + 2 || vec[2] == vec[1] + 2 )
			{
				cout << "1" ; 
				return (0);
			}
			else
			{
				cout << "2";
				return 0;
			}
		}
	}
	else
	{	//count2 = 0 ;
		//cout << "ho";
		char array[3] = {a1,b1,c1};
		sort(array,array+3);

		if (array[0] != array[1] && array[1] != array[2])
		{
			//count2 = 2 ;
			//cout << " ere";
			cout << "2" ;
			return (0);
		}
		else 
		{
			if (vec[1]-vec[0] == 1 ||vec[2]-vec[1] == 1 )
			{cout << "1";
			return (0);}
			else if ((vec[1]-vec[0] == 2 ||vec[2]-vec[1] == 2 ))
			{
				cout << "1";
				return 0 ;
			}
			else if (a == b && b ==c)
			{
				cout << "1";
				return 0;
			}
			else if (vec[1] - vec[0] > 2 || vec[1] - vec[0] > 2 )
			{
				cout << "2";
				return 0 ;
			}
			
		}
	}
	
		
	
	return 0;
}