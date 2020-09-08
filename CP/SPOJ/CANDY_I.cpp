#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t!=-1)
	{
		int k;
		k = t;	int sum1;
		int arr[10001] = {0};
		int i = 1;
	    sum1 = 0;
		while(k--)
		{
				int temp;
				cin >> temp;
				sum1 = sum1 + temp;
				arr[i++] = temp;
		}	
			float diff = sum1/(float)t;

			if(ceil(diff) != floor(diff))
			{
				cout << -1 << endl;
			}
			else
			{	int difsum = 0;
			
				for(int i = 1; i <= t; i++)
				{
					difsum = difsum + abs(arr[i] - diff);
				}
				cout << difsum/2 << endl;
			}
		cin >> t;
		if(t == -1)break;
		
	}
	return 0;
}