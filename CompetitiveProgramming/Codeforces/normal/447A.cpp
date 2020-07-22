#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int p, n;
    cin >> p >> n;
    int arr[p]={0};
    for (int j = 0; j < n; j++)
    {
        int i;
        cin >> i;
        if(!arr[i%p])
            arr[i % p] = 1;
        else{
            cout << j + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}