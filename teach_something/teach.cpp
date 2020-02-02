#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the arrayManipulation function below.

// explanation
// adding something to a range means
// if we add something to a ---- b
// STEPS
// 1. add M to A
// 2. subtract M from B + 1
// 3. Take prefix sum after doing this running for no. of operations
// 4. Subtracting from B+1 cancels the effect of addition earlier.
// 5. So it is added only from a to b

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<int> v(1e7, 0);
    for(int i = 0;i < queries.size() ; i++)
    {
        int a = queries[i][0];
        int b = queries[i][1];
        int m = queries[i][2];
        v[a-1] += m;
        v[b] -= m;

    }
    vector<long long int> prefix(v.size(), 0);
    prefix[0] = v[0];
    for(int i = 1; i < v.size(); i++)
    {
        prefix[i] = prefix[i-1] + v[i];
    }
return (long)*max_element(prefix.begin(), prefix.end());

}

