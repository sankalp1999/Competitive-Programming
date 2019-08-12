#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n ;
    int i ;
    int temp ; 
    cin >> n ; 
    vector<int>vect ;  
    for(i=0;i<n;i++)
    {   
        cin >> temp ;
        vect.push_back(temp);
    }
    sort( vect.begin(), vect.end()) ;
    for(i=0;i<vect.size();i++)
    {
        cout << vect[i];
    }
    return 0;
}
