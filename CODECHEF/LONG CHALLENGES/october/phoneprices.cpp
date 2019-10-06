#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;


	while(t--)
	{
		int n;
		cin >> n;
			vector<int> p;
	p.push_back(751);
	p.push_back(751);
	p.push_back(751);
	p.push_back(751);
	p.push_back(751);
		for(int i = 0 ; i < n; i++)
		{
			int temp ;
			cin >> temp;
			p.push_back(temp);
		}
		int good = 0 ;
 		for(int i = 5 ; i < p.size(); i++)
 		{
 			//cout << p[i] << " ";
 			if(p[i] < p[i-1] && p[i] < p[i-2] && p[i] < p[i-3] && p[i] < p[i-4] && p[i] < p[i-5] )
 			{
 				good++;
 			//	cout << p[i] << endl;
 			}
 		}
 		cout << good << endl;
		
	}
	return 0;
}
