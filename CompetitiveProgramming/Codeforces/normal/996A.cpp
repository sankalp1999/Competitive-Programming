#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	// 1, 5, 10, 20 ,100
	int arr[] = {1,5,10,20,100};
	int i = 4;
	int count = 0;
	while(1)
	{
		if(n == 0)break;
		if(n - arr[i] < 0){i--;}
		else{n = n - arr[i];
		count++;}
		
	}
	cout << count << endl;
	return 0;
}