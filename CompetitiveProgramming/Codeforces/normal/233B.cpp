    #include <iostream>
    #include <vector>
    #include <map>
    #include <cmath>
    using namespace std;
    typedef long long int ll;

    long long int sum_of_digits(ll n)
    {
        ll sum = 0;
        while(n != 0)
        {
            sum += n%10;
            n = n/10;
        }
        return sum;
    }
    // long long int a = (long long) 1e9;
    int main()
    {
        ll n;
        cin >> n;

        ll expr;
    
    // sod can be max 90
    // our answer depends only on sod and n
    // n we already know
        for (int i = 0; i <= 90; i++)
        {
            
            expr = i * i + 4 * n;
            ll temp = sqrt(expr);
            if(temp*temp  !=  expr)
                continue;
            temp -= i;
            // this is the numerator
            if(temp%2 != 0)
                continue;
            // sum of digits should be equal to the sum of digits of solution also since sod is the sum of digits of x only
            if (i == sum_of_digits(temp / 2))
            {
                cout << temp / 2 << endl;
                return 0;
            }
            else
                continue;
        }
        cout << "-1" << endl;
        return 0;
    }