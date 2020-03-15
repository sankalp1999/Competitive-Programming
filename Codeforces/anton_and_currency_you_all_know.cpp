#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
// bool sortbyfirst(const pair<int,int> &a, 
//               const pair<int,int> &b) 
// { 
//     return (a.first >  b.first); 
// } 

// https://codeforces.com/problemset/problem/508/B

int main() {
	// your code goes here
	char arr[(int)1e5];
	cin >> arr;
	int countEven = 0;
	int n = strlen(arr) ;
	
	for(int i = 0 ; i < n  ;i++)
	{
		if(arr[i]%2 == 0)
		countEven++;
	}
	if(countEven == 0 )
	{	
		cout << -1 << endl;
		return 0;
	}
	else
	{
		int p = arr[n -1];
		int l = -1;
		int r = -1;
		for(int i = strlen(arr) - 1; i >= 0 ; i--)
		{
			if(arr[i]%2 == 0 && arr[i] < p  )
			{
				l = i;
			}
		}
		for(int i = 0 ; i < strlen(arr) - 1; i++)
		{
			if(arr[i]%2 == 0 && arr[i] > p)
			{
				r = i;
			}
		}
		int n = strlen(arr) - 1;
		if(l == -1)
		{
			swap(arr[n], arr[r]);
		}
		else
		{
			swap(arr[n], arr[l]);
		}
		cout << arr << endl;
	}
	return 0;
}