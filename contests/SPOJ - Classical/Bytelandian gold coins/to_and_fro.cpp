#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    int cols;
    cin >> cols;
    while(1)
    {
        char a[400];
        cin >> a;
        long long int rows = strlen(a)/ cols;
        // string final = "";
        char matrix[rows][cols];
        int k = 0;
        for (int i = 0; i < rows; i++)
        {
            
            if(i%2 == 0)
            {
                for (int j = 0; j < cols; j++)
                {
                    matrix[i][j] = a[k++];
                }
            }
            else
            {
                for (int j = cols-1; j >= 0; j--)
                {
                    matrix[i][j] = a[k++];
                }
            }
        
        }
        
        for (int i = 0; i < cols; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                cout << matrix[j][i] << "";
            }
        }
        cout << endl;

        cin >> cols;
        if(cols ==0 )
            return 0;
    }
}