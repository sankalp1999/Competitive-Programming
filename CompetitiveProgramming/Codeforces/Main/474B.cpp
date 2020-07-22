#include <bits/stdc++.h> 
using namespace std;

int main(){
int n;
vector<int> v;

cin >> n;
int arr[n];
for(int i = 0 ;i < n; i++)
{
    cin >> arr[i];
}

v.push_back(arr[0]);
for (int i = 1; i < n; i++)
{
    v.push_back(arr[i] + v[i- 1]);
   
}


int n3;
cin >> n3;
while(n3--)
{
    int q;
    cin >> q;
    auto it = lower_bound(v.begin(), v.end(), q) ;
	cout << it - v.begin() + 1<< endl;
	
}
return 0;
}