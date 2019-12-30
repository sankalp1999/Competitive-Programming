#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int k, knap, index, z;
    cin >> k >> knap;
    int i, j ;
    vector<int> value;
    vector<int> amount;
    vector<double> roi ;
    int a; 
    for(i=0;i<k;i++)
    {   
        int t1, t2;
        cin >> t1 >> t2;
        value.push_back(t1);
        amount.push_back(t2);
        roi.push_back((double)t1/t2);
    }
    
    double loot = 0;
   
    while(knap !=0 )
    {   double max1 = *max_element(roi.begin(),roi.end());
        for (z=0 ; z<roi.size();z++)
        {
            if (roi[z] == max1)
            {
                index = z ;
            }

        }
        a = knap < amount[z] ? knap : amount[z];

        //printf("%d %d ",knap,amount[i]);
       // printf("here -> %d \t \n",a);
  //      cout << roi[i] << endl;
        auto it = amount.begin() + z ;
        auto it2 = roi.begin() + z ;
        

        amount.erase(it);
        roi.erase(it2);

        loot = loot + a*max1;
        knap = knap - a ;
       
     }
       cout.precision(10);
    cout << loot << endl;

return(0);


}