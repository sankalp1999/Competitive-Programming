#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		
		for(int i = 0 ; i <n ;i++)
		{
			cin >> v[i];	
		}
		int start, end, iter;
		start = 0;
		end = 0;
		for(int i = 0; i < n; i++)
		{
			if(v[i+1] ==  v[i] + 1)
			{
				end++;
			}
			
			else
			{	// print here
				if(end - start == 1)
				{
					
				
					if(v[end] == v[v.size() - 1] )
					{
						cout << v[start] << "," << v[end] ;
						break;
					}
					else
					{
						cout << v[start] << "," << v[end] << "," ;
					}
					
				}
				else if(end  == start)
				{
					if(v[start] == v[v.size() - 1])
					{
					cout << v[start] ;
					break;
						
					}
					else
					{
							cout << v[start]  << ",";
					}
					
				}
				else if(end - start >= 2)
				{
					
					if(v[end] == v[v.size() - 1]){
					cout << v[start] << "..." << v[end] ;
						break;
					}
					else{
					cout << v[start] << "..." << v[end] << "," ;
					}
					
				}
				start = i + 1;
				end = i + 1;
			}
		}cout << endl;
	}
	return 0;
}