#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int a; 
	cin >> a ;
	vector<int> arr;
	while(a--)
	{
		int temp ;
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	for(int i = 0; i < arr.size(); i++)
	{
		cout <<  arr[i] << " ";
	}
	cout << endl;
}