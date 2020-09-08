#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char s[100];
	char t[100];
	cin >> s >> t;
	int count =0;
	int k = 0;
	for(int i =0 ; t[i] != '\0'; i++ )
{
	if(s[k] == t[i])
	{
		count++;
		k++;
	}
}
	
	cout << count + 1 << endl;
	return 0;
}