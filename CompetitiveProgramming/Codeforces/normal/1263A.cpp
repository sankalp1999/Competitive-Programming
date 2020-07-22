#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	

	while(t--)
	{	int count = 0 ;
		int arr[3];
		for(int i = 0 ; i < 3; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + 3);
		int a = arr[0];
		int b = arr[1];
		int c = arr[2];
	
		if(c == b)
		{
			while(a > 0)
			{
				a--;
				b--;
				count++;
				if(a){c--;count++;}
			}
			while(c>0 && a>0 || c>0 && b>0){
			if(b>0 && c > 0)
			{
				b--;
				c--;
				count++;
			}
			else{break;}}
		}
		else
		{
			while( c > 0  )
			{	
				if(a>0 && c> 0){a--;c--;count++;}
				if(b>0 && c> 0){b--;c--;count++;}
				if(a == 0 && b == 0)break;
				
			}
		}
			
		cout << count << endl;
	}
	
}