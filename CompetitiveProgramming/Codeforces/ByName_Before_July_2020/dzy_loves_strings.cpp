#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[1001];
    cin >> arr;
    int k, max1, pos;
    max1 = 0;
    pos = -1;
    cin >> k;
    int alpha[26];
    for (int i = 0; i < 26; i++)
    {
        cin >> alpha[i];
        if(alpha[i] > max1){
            max1 = alpha[i];
            pos = i;
        }
    }
    int j = strlen(arr);
    int sum = 0;
    // while (k--)
    // {
    //     arr[j++] = (char)('a' + pos);

    // arr[j] = '\0' ;
    // long long int sum = 0;
    // cout << arr << endl;
    for (int i = 0; i < strlen(arr); i++)
    {
        sum += (long long)((i+1) * alpha[(arr[i] - 'a')  ]);
    }
    int val = max1;
    sum += max1 * (j * k + k * (k + 1) / 2);
    cout << sum << endl;
}
