#include <iostream>
using namespace std;

int main() {
	int a, b ;
	cin >> a >> b ; 
	int width = 0 ;
	while(a--)
	{
		int temp;
		cin >> temp;
		if(temp > b){width += 2 ;}
		else { width += 1 ;}
		
	}
	cout << width << endl;
	return 0;
}