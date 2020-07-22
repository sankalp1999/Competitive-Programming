#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// 0 +
	// 1 -
	// 2 ?
	string s;
	cin >> s ;
	int count[3] = {0};
	for(char i : s)
	{
		if(i == '+')
		{
			count[0]++;
		}
		else if(i == '-')
		{
			count[1]++;
		}
		else if(i == '?')
		{
			count[2]++;
		}
	}
	string s2;
	cin >> s2;
	int count2[3] = {0};
		for(char i : s2)
	{
		if(i == '+')
		{
			count2[0]++;
		}
		else if(i == '-')
		{
			count2[1]++;
		}
		else if(i == '?')
		{
			count2[2]++;
		}
	}
	double d = 1.0000000000;
	if(count[0] == count2[0] && count[1] == count2[1] &&   count2[2] == 0)
	{
		cout << d << endl;
		return 0;
	}
	int question = count2[2];
	int plus = abs(count[0] - count2[0]);
	int sub = abs(count[1] - count2[1]);
	if(sub + plus > question){
		
		cout << 0.00000000 << endl;}
	else
	{
		if(sub == 0 && plus > 0)
		{
			d = pow(0.5, plus);
		}
		else if(plus == 0 && sub > 0)
		{
			d = pow(0.5, sub);
		}
		
		else if(sub + plus == question) 
		{
			d = 0.5 ;
		}
	
		cout  << d << endl;
	}
	return 0;
}