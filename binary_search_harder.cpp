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
/* 
    LOWER BOUND
Problem statement

Find first value >= X.
 x = 4
 2, 3, 5 ,6 , 8 ,9 ,10
 ans : 5
*/
int next_element(int n, int arr[], int ele)
{   
    int l = 0;
    int r = n - 1;
    int mid = 0;
    int ans = -1; // answer that will be returned when
                  // when no answer is found
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if(arr[mid] >= ele)
        {
            ans = mid;
            r = mid - 1; // go to the left for a possibly better answer.
        }
        else
        {
            l = mid + 1; // go to the right and discard the left side
        }
    }
    // Here, we do not exit the while loop in between.
    return ans;
}
int main()
{
    int arr[] = {2, 3, 5, 6, 8, 9, 10};
    int ans = next_element(7, arr, 4);
    cout << arr[ans] << endl;
}