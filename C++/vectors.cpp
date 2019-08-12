#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, i, j, k, x;
    int q1, q2; 
    int z;
    vector<int> vect; 
    vector<vector<int> > vect2 ;
    int l ;  
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {   
        scanf("%d",&z);
        for(k=0;k<z;k++)
        {
            cin >> l ;
            vect.push_back(l);

        }
        vect2.push_back(vect);
    }
    for(x=0;x<b;x++)
    {
        scanf("%d %d",&q1,&q2);
        printf("%d",vect2[q1][q2]);
        printf("\n");
    }


    
    
    
}

