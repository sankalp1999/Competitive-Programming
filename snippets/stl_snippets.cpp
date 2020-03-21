#include <iostream>
using namespace std;
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