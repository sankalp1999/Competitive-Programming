#include <iostream>
using namespace std;
1. Using map 
int main()
{

    map<int, vector<int>> mp;
    // this basically allows one to use multiples 
    // values with a single key.
    // USEFUL IN DICTIONARY KIND OF PROBLEMS
    for(vector<int> a : reservedSeats){
        mp[a[0]].push_back(a[1] - 1); // make 0 indexed
    }
}


2. Using vector 
     int i = A.size() - 1; // i pointing to last index of A
    int j = B.size() - 1; // j pointing to last index of B
    
    int lastPos = A.size() + B.size() - 1; // lastPos pointing to last index of merged array A and B
    
    A.resize(A.size() + B.size());