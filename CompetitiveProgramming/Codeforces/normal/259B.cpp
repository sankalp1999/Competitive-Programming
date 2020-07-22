#include <iostream>
using namespace std;

int main() {
	int arr[3][3];
	for(int i = 0 ; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	long long int k = (arr[0][1] + arr[0][2] + arr[1][0] + arr[1][2] + arr[2][0] + arr[2][1])/2;
	long long int x, y, z;
	x = k - arr[0][1] - arr[0][2];
	y = k - arr[1][0] - arr[1][2];
	z = k - arr[2][0] - arr[2][1];
	arr[0][0]=x;
	arr[1][1]=y;
	arr[2][2]=z;
		for(int i = 0 ; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}cout << endl;
	}
	
	return 0;
}