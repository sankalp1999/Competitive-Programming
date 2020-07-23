#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    char s[10000];
    cin >> s;
    int i, j;
    i = 0;
    // cout << s << endl;
    j = strlen(s);
    vector<int> operations;
    int k = strlen(s) - 1;
    int f = 1;
    // cout << k << endl;
    int visited[strlen(s)] = {0};
    for (int i = 0; i < strlen(s); i++)
    {

        if(s[i] == '(') 
        {

            for (int j = strlen(s) - 1; j > i; j--){
                
                if(visited[j] == 0 && s[j] == ')')
                {
                    operations.push_back(i + 1);
                    operations.push_back(j + 1);
                    visited[j] = 1;
                    break;
                }
            }
        }
    }
    if (operations.size() == 0)
    {
        cout << 0 << endl;
        
        return 0;
    }
    cout << 1 << endl;
    cout << operations.size() << endl;
    sort(operations.begin(), operations.end());
    for (int i = 0; i < operations.size(); i++)
    {
        cout << operations[i] << " ";
   }

   return 0;
}