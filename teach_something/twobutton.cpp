#include <iostream>
#include <string>
#include <queue> 
using namespace std;
int count = 0;
 // using breadth first search and searching the 
 // state space

int main()
{
    int n, m;
    cin >> n >> m;
    queue<int> q;
	int used[1000000] = {0};
	int d[1000000]  ={0};
	q.push(n);
	d[n] = 1 ;
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
	
		if(!used[2*u] && 2*u <= 2 *m)
		{
			q.push(2*u);
			used[2*u] = 1;
			d[2*u] = d[u] + 1;
		}
		if(!used[u-1] && u-1 >= 0)
		{
			q.push(u-1);
			used[u-1] = 1;
			d[u-1] = d[u] + 1;
		}
		if(u == m)
		{
			break;
		}
	}
	cout << d[m] - 1 << endl;
	
    
    
   
    
}