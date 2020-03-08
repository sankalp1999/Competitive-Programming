// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n % 2 ==1)
    {
        cout << -1 << endl;
    }
    else
    {
        int arr[1001] = {0};
        for(int i = 1;i < 1001; i++)
        {
            arr[i] = i;   
        }
        for(int i = 1; i < 1001; i = i + 2)
        {
            swap(arr[i], arr[i+1]);    
        }
        for(int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";    
        }
        
    }

}
