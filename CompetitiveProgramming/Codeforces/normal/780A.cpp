#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[10001] = {2};
	int max = 0 ;
	int count = 0;
	set<int> s;
	
	for(int i = 0 ; i < 2*n; i++)
	{
		int t;
		cin >> t;
		if(s.find(t) != s.end())count--;
		else {
			s.insert(t);
			count++;
			if(count > max)max = count;
			
			}
	}
	cout << max << endl;
	
	return 0;
	}