#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int t;
	cin >> t;
	char a[200];
	char b[200];
	while(t--)
	{
		cin >> a;
		cin >> b;
		int l = strlen(a);
		int r = strlen(b);
		int count = 0;
		int visited[strlen(b)] = {0};
		for(int i = 0;i < l; i++)
		{
			char c = a[i];
			for(int j = 0; j < r;j++)
			{
				if(visited[j] != 1 && b[j] == c)
				{
					count++;
					visited[j] = 1;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
