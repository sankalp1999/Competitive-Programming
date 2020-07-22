#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        vector<int> v ;
        vector<pair<int, int>> v2 ;
        for(int i = 0 ; i < 6 ;i++)
        {
            int temp ;
            cin >> temp;
            v.push_back(temp);
        }
        int a1, a2, a3 ;
        int c1, c2, c3;
        a1 = v[0];
        a2 = v[1];
        a3 = v[2];
        c1 = v[3];
        c2 = v[4];
        c3 = v[5];
        v2.push_back({a1,c1});
        v2.push_back({a2,c2});
        v2.push_back({a3,c3});
        sort(v2.begin(), v2.end());
        int flag = 0 ;
      
      
        for(int i = 0 ; i < v2.size() - 1 ; i++)
        {
            //cout << v2[i].second << v2[i+1].second << endl;
            if(v2[i].first == v2[i+1].first)
            {
                if(v2[i].second != v2[i+1].second)
                {
                flag = 1 ;
                break;
                }
                else
                {continue;}
            }
            if(v2[i].second > v2[i+1].second)
            {
                
                flag = 1 ;
                break;
            }
            if(v2[i].first < v2[i+1].first  )
            {
            	//cout << v2[i].first << " " << v2[i+1].first ;
            	if(v2[i+1].second <= v2[i].second)
            	{
            		flag = 1;
            		break;
            	}
            }
        }
        if(a1 == a2 && a2 == a3 && a3 == a1)
        {	
        	if(c1 == c2  && c2 == c3 && c3 == c1)
        	{
        		
        		cout << "FAIR" << endl;
        	}
        	else
        	{
        		cout << "NOT FAIR" << endl;
        	}
        }
        else if(flag == 1)
        {
            cout << "NOT FAIR" << endl;
        }
        else if(flag == 0)
        {
           
            cout << "FAIR" << endl;
        }
    }
    return 0 ;


}
