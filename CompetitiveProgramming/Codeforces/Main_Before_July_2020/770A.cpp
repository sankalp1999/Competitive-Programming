#include <iostream>
using namespace std;

int main() {
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int n;
	int k;
	cin >> n >> k;
	
	while(n != 0)
{		for(int j = 0; j < k; j++)
		{
			cout << alp[j] << ""; 			
			n--;
			if(n == 0)break;
		}
		
}
	
		
	
	return 0;
}