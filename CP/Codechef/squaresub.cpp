#include<bits/stdc++.h>
#define REP(i,n) for (lli i = 0; i < n; i++)
#define mod 1000000007
#define lli long long int
#define INF 1000000000


using namespace std;


int categorise(lli x)
{
    if(x % 2 == 1)
        return 0;
    else if(x % 4 == 0)
        return 2;
    else if(x % 2 == 0)
        return 1;   
}

int main()
{
   lli t;
   cin >> t;
   while(t--)
   {
       lli n;
       cin >> n;
    //    vector<lli> v(n);
       long long int v[n];
       for (int i = 0; i < n; i++)
       {
           int temp;
           cin >> temp; // categorise as vs of 2 -- 0, 1, 2
           v[i] = categorise(abs(temp)); // we only want powers of 2 
       }

    lli number = n;
    // lli z, res;
    long long int z;
    long long int res = 0;
    //    vector<int> vraisedtotwo(number, 0);
       long long int vraisedtotwo[number] = {0};
       for (int i = 0; i < number; i++)
       {
           if(v[i] == 1)
           {
               int p = 1;
               res = 0;
               for (int j = i + 1; j < number; j++)
               {
                   p += v[j];
               
               if(p >= 2)
               {
                   res += number - j;
                   vraisedtotwo[i] = res;
                   res = 0;
                   break;
               }
               }
           }
       }
   
       res = 0;
       int flag = 0;
       long long int  i = 0;
       long long int count, pos;
    //    count = 0;
       while (i < number)
       {
           if(v[i] == 0)
           {
               count = 1;
               pos = 0;
               for (int h = i + 1; h < number; h++)
               {
                   if(v[h] == 0)
                       count++;
                    else
                    {
                        pos = h;
                        break;
                    }
                }
                
                res = res +  ((count * (count + 1)) / 2); // maybe mod
                if(pos == 0)
                    break;
                i = pos - 1;
                if(v[pos]  == 1)
                {
                    res = res +  (count * vraisedtotwo[pos]);
                }
                else if(v[pos] == 2)
                {
                    res =  res + (count * (number - pos));
                }
           }
           else if(v[i] == 1)
           {
               res += vraisedtotwo[i];
           }
           else if(v[i] >= 2)
           {
               res += number - i;
           }
           i++;
       }
       cout << res << endl;
   }
   return 0;
}