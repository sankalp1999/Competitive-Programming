#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	int arr[101] = {0};
	int arr2[101] = {0};
	for(int i = 1; i <= n; i++)
	{
		int temp;
		cin >> temp;
		arr[temp]++ ;
	}
	cin >> m;
	for(int j = 1 ; j <= m; j++)
	{
		int temp;
		cin >> temp;
		arr2[temp]++ ;
	}

	int i, j;
	i = 1;
	j = 1;
	int count = 0;
	while(i <= 100 && j <= 100)
	{

		while(arr[i]> 0 && arr2[j] > 0 )
		{
			arr[i]--;
			arr2[j]--;
			count++;
		   
		}
		
	    if(arr[i] == 0){i++;}
		if(arr2[j] == 0 ){j++;}
		
		if((j - i) > 1)
		{
			while(i != j - 1 )
			{
				i++;
			}
		}
		else if(i - j > 1){
			while(j!=i -1  )
			{
				j++;
			}
		}

	
	}
		cout << count << endl;
	return 0;
}