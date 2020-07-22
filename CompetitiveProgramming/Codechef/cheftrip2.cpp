#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k ;
        cin >> n >> k;
        int arr[n];
        int b[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i] ;
        }
        if(k == 2)
        {
            int flag1 = 0 ;
            for(int i = 0; i < n ; i++)
            {
                b[i] =((i)%2) + 1 ;
            }
            for(int i = 0 ; i <n ; i++)
            {
                if(arr[i] == -1)
                {
                b[i] =((i)%2) + 1 ;
                continue;
                }
                else
                {
                    if(arr[i] != b[i])
                    {
                    flag1 = 1 ;
                    break;
                    }
                }
            }
            if(flag1 == 0)
            {
                cout << "YES" << endl;
                for(int i =0 ; i < n ; i++)
                {
                    cout << b[i] << " ";
                }
                cout << endl;
                continue;
            }
            int flag2 = 0;
            for(int i = 0; i < n ; i++)
            {
                b[i] =((i+1)%2) + 1 ;
            }
             for(int i = 0 ; i <n ; i++)
            {
                if(arr[i] == -1)
                {

                continue;
                }
                else
                {
                    if(arr[i] != b[i])
                    {
                    flag2 = 1 ;
                    break;
                    }
                }
            }
            if(flag2 == 0)
            {
                cout << "YES" << endl;
                for(int i =0 ; i < n ; i++)
                {
                    cout << b[i] << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }
        if(k >= 3)
        {
            cout << "YES" << endl;
            for(int i = 0 ; i < n ; i++)
            {
            	if(arr[i] != -1)
            	{
            		continue;
            	}
            	if(i == 0 )
            	{
            		arr[i] = 1;
            		if(arr[i+1] == 1)
            		{
            			arr[i] = arr[i] + 1 ;
            		}
            	}
            	else if(i == n-1)
            	{
            		arr[i] = 1;
            		if(arr[i-1] == 1)
            		{
            			arr[i]++;
            		}
            	}
            	else
            	{
            		arr[i] = 1;

            		if(arr[i-1] == 1 || arr[i+1] == 1)
            		{	//cout << "inside else" ;
            			arr[i] = 2;
            			if(arr[i-1] == 2 || arr[i+1] == 2)
            			{
            				arr[i] = 3;
            			}
            		}

            	}


            }

            for(int i = 0 ; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }


}
