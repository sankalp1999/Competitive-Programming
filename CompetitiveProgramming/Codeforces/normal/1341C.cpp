#include <iostream>
#include <set>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int pos[n + 5]; // n + 1
		set<int> avail;
		for(int i = 1 ;i <= n; i++)
		{
			int temp;
			cin >> temp;
			pos[temp] = i; // marking the positions
			avail.insert(i); // initially all pos are available
		}
		int currpos = -1;
		
		auto it = avail.find(pos[1] + 1); // position of 2 should 
		// be one more than 1
		avail.erase(pos[1]);
		if(it != avail.end()) // if 1 is at end, then it != avail.end();
		{
			currpos = *it;
		}
		int flag = 0;
		for(int i = 2; i <= n; i++)
		{
			if(currpos!=-1 && pos[i] != currpos)
			{
				cout << "No" << endl;
				flag = 1;
				break;
			}
			
			it = avail.find(pos[i] + 1);
			avail.erase(pos[i]);
			if(it!=avail.end())currpos = *it;
			else currpos = -1;
		}
		if(flag == 0)
		{
			cout << "Yes" << endl;
		}
		
		
		
	}

	return 0;
}