#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n, d;
	    cin >> n >> d;
	    int arr[n];
	    for(int i = 0; i< n; i++)
	    {
	        cin >> arr[i];
	    }
	    reverse(arr, arr + d);
	    reverse(arr, arr + n);
	    reverse(arr, arr + (n- d));
	    for(int i = 0 ;i < n; i++)
	    {
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	    
	}
	return 0;
}
