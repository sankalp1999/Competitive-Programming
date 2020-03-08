#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    int i, j;
    i = 0;
    j = s.size() - 1;
    vector<int> operations;
    int k = s.size() - 1;
    int f = 1;
    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << "debug" << endl;

        if(s[i] == '(')
        {
            for (int j = k; j > i; j-- )
            {
                if(s[j] == ')')
                {
                    operations.push_back(i+1);
                    cout << " inside " << endl;
                    operations.push_back(j + 1);
                    k--;
                    break;
                }
                if(j > i)
                    f = 0;
                break;
            }
            if(f==0)
                break;
        }
    }
   for (int i = 0; i < operations.size(); i++)
   {
       cout << operations[i] << " ";
   }

   return 0;
}