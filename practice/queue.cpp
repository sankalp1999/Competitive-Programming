#include <cstdio>   
#include <iostream>

using namespace std;
int main()
{
    long long int l, t;
    cin >> l >> t;
    cin >> input;
    string input;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < input.size() - 1 ; j++)
            {if (input[j] == 'B' && input[j + 1] == 'G')        
            
            {
                swap(input[j], input[j + 1]);
                j++;
            }
            }
    }
    for (char x : input)
    {
        cout << x ;
    }
    return 0;
}