        #include <iostream>
        #include <vector>
        #include <cmath>
        using namespace std;

        int main() {
            int t;
            cin >> t;
            while(t--)
            {
                long long int n, k;
                cin >> n >> k ;
                vector<int> arr(n);
                int flag = 0;
                for(int i = 0 ; i < n ; i++)
                {
                    cin >> arr[i] ;
                }
                long long int limit = 0 ;
                if(n%2 == 1)
                {
                    long long limit =  3*n;
                    int a, b, c ;
                    long long int till, start ;
                    int flag = 0;
                    long long int length = (n-1)/2 + 3*n;
                  //  if(k > length){k = k - }
                 //   start = (k/limit)*((n-1)/2);
                    if( (k) < length) {till = k;
                    start = 0;
                    }
                    else
                    {   flag = 1;
                        start = (n-1)/2;

                        while(k > length)
                        {
                        	k = k - 3*n;
                        }
                        till = k;
                    }

                    for(int i = 0 ; i < till; i++)
                    {	c = i%n;
                        a = arr[c];
                        b = arr[n - c - 1];
                        arr[c] = a^b;
                    }
                    for(int i : arr)
                    {
                        cout << i << " ";
                    }cout << endl;


                }
                // second case of even no.
                else
                {
                    limit = 3*n;
                    long long int a, b, c;
                   long long int till  = (k)%limit;
                    for(int i = 0 ; i < till; i++)
                    {	c = i%n;
                        a = arr[c];
                        b = arr[n - c - 1];
                        arr[c] = a^b;
                    }

                    for(int i : arr )
                    {
                        cout << i << " ";
                    }cout << endl;

                }

            }
            return 0;
        }
