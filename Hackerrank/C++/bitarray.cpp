
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
typedef long long int ll;
/*
a[0] = S (modulo 2^31)
for i = 1 to N-1
    a[i] = a[i-1]*P+Q (modulo 2^31)
*/
int main() {
    ll n, s ,i, p, q ;
    set<long long int> lifeishard ;
    cin >> n >> s >> p >> q ;
    vector<long long int> vect;
    ll temp, temp2 ;
    temp = s % (int)pow(2,31);
    temp2 = q % (int)pow(2,31);
    vect.push_back(temp);
    for(i=0;i<n;i++)
    {
        vect[i] = vect[i-1]*p + temp2 ;
    }
     for(i=0;i<n;i++)
    {
        lifeishard.insert(vect[i]);

        //vect1[i] = vect[i-1]*p + (q%pow(2,31));
    }
    cout << lifeishard.size() << endl ;

    return 0;
}

