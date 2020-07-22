#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;
int main()
{
    int n; 
    cin >> n ; 
    while(n--)
    {

        int n, m, k;
        cin >> n >> m >> k;
        int bag = m;
        vector<int> v(n);
        int flag = 0; 
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < v.size() - 1 && n > 1; i++)
        {
            
                while (1)
                {
                    if (abs(v[i] - v[i + 1]) <= k )
                    {
                        if (v[i] > v[i+1] )
                        {
                            while(v[i]!= v[i+1])
                            {
                                v[i]--;
                                bag++;
                            }
                        }
                        break;
                    }
                    if (v[i + 1] > v[i])
                    {
                        bag--;
                        
                        if (bag < 0 )
                        {
                            flag = 1;
                            break;
                        }
                        v[i]++;
                    }
                    else if (v[i] > v[i+1])
                    {
                        v[i]--;
                        bag++;
                    }
                }
                if (flag == 1 )
                {
                    break;
                }
        }
        if (flag == 1 )
        {
            cout << "NO" << endl;
        }
        else if (n == 1 )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
        }
    return (0);
}