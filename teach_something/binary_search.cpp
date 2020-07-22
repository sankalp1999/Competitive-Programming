#include <iostream>
using namespace std;
int binary_search(int arr[], int ele, int n)
{
    
    int l = 0, r = n - 1;
    int mid = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if(arr[mid] == ele)
        {
            return mid;
        }
        if(arr[mid] < ele)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
      
    }
      return -1;
}
// is x a square using binary search 
// 16 --> YES 
// 20 --> NO, not allowed to use the square root function
/*
start from 0 to x 
each step of binary search, ask about middle value M 
and compare it with X, if m^2 is equal x and then terminate.
otherwise
    check if m^2 is bigger than x, high = mid - 1
    if smaller start = mid + 1
// can be used to find square root also.
*/
int square(int x)
{
    int l = 0;
    int r = x - 1;
    long long int mid = 0;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(mid*mid == x )
        {
            cout << "Yes, it is a square." << endl;
            return mid;
        }
        else if(mid*mid < x)
        {
            l = mid + 1;
        }
        else
        {
           r = mid - 1; 
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 3, 5, 6, 100};
   // int x = binary_search(arr, 100, 5);
    int m = square(16);
    cout << m << endl;
   // cout << x << endl;
}