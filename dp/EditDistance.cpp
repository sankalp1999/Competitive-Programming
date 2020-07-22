#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
void OutputAlignment(int, int, string, string);
int d[1000][1000] = {0};
int Edit_Distance(string a, string b){
    
    d[0][0] = 0;
    for (int i = 1; i <= a.size(); i++)
    {
        d[i][0] = i;
    }
    for (int j = 1; j <= b.size(); j++){
        d[0][j] = j;
    }
    int insertion, deletion, mismatch, match;
    int i, j;
    for (i = 1; i <= a.size(); i++)
    {
        for (j = 1; j <= b.size(); j++)
        {
            insertion = d[i][j - 1] + 1;
            deletion = d[i - 1][j] + 1;
            mismatch = d[i - 1][j - 1] + 1;
            match = d[i - 1][j - 1] ;
        
        if(a[i-1] == b[j-1]){
            d[i][j] = min({insertion, deletion, match});
        }
        else if(a[i-1] != b[j-1])
        {
            d[i][j] = min({insertion, deletion, mismatch});
        }
        }

    }
    // for (int i = 0; i <= a.size(); i++)
    // {
        // for (int j = 0; j <= b.size(); j++)
        // {
            // cout << d[i][j] << " ";
        // }
        // cout << endl;
    // }
    OutputAlignment(i, j, a, b);
    return d[a.size()][b.size()];
}
void OutputAlignment(int i, int j, string a , string b)
{
    if (i == 0 && j == 0)
    {
        return;
    }
    if(i > 0&& d[i][j] == d[i-1][j] + 1){
        OutputAlignment(i - 1, j, a , b);
        cout << a[i] << " ";
    }
    else if( j > 0 && d[i][j] == d[i][j -1]  + 1 )
    {
        OutputAlignment(i, j - 1, a, b);
        cout << b[j] << endl;
    }
    else
    {
        OutputAlignment(i - 1, j - 1, a, b);
        cout << a[i] << " ";
        cout << b[j] << " ";
    }
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << Edit_Distance(a , b) << endl;
}