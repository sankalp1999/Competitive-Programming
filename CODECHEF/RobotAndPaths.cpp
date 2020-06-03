#include <bits/stdc++.h>

using namespace std;
 
int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	vector<pair<int,int>> a;
	vector<pair<int,int>> b;
	for(int i = 0;i < n; i++)
	{
		int temp; cin >> temp;
		a.push_back({temp, i});
	}
	for(int i = 0 ;i < m; i++)
	{
			int temp; cin >> temp;
			b.push_back({temp, i});
	}
   int a_max = distance(a.begin(), max_element(a.begin(), a.end()) );
   int b_min = distance(b.begin(), min_element(b.begin(), b.end() )) ;
   //a_max-- > pair all b elements
  // b_min-- > pair all a elements except a_max
   for (int i = 0; i < b.size(); i++)
   {
      cout << a_max << " " << i << endl;
   }
   for (int i = 0; i < a.size(); i++)
   {
      if(i != a_max)
      {
         cout << i << " " << b_min << endl;
      }
   }
   return 0;
}