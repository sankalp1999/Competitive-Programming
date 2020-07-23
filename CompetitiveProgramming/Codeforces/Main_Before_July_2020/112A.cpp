#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	char a[120] ;
	char b[120] ;
	cin >> a >> b ;
	long long int s1, s2;
	s1 = 0 ;
	s2 = 0 ;
	int c, d ;
	for(int i = 0 ; a[i] != '\0';i++)
	{
		 c = int(a[i]);
		 d = int(b[i]);
		 if (c <= 90){c = c + 32 ;}
		 if (d <= 90){d = d + 32 ;}
		 s1 = s1 + c ; 
		 s2 = s2 + d ;
		  if (s1 < s2 )
	{
		cout << -1 << endl;
		return 0;
	}
	else if (s1 > s2 )
	{
		cout << 1 << endl ;
		return 0;
	}
	}
	if (s1 == s2)
	{
		cout << 0 << endl;
	}
	
	
	return 0;
}