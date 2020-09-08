#include <iostream>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int k = n ;
    int max = n ;
    int c = 0;
    int t = 0;
    for (int i = 0; i < n+1; i++)
    {
        c = 0;
        k = max;
        while (k--)
            cout << "  ";

        max--;
        t = n - (max);
        while(t--)
        {
            if(t==0)
                {cout << c;
                    c++;
                    break;
                }
                cout << c << " ";
                c++;
        }
        c -= 1;
        
        if(c!=0)cout << " ";
        while (c--)
        {
            if (c != 0)
                cout << c << " ";
            else
                cout << c;
            }
            cout << endl;
    }
    int min = 0;
    int s;
    for (int i = 0; i < n; i++)
    {
      s = ++min;
      while(s--)
          cout << "  ";
      t = n - min +1;
      c = 0;
      while (t--)
      {
          
          if(t==0)
          cout << c;
          else
          {
              cout << c << " ";
          }

          c++;
      }
      c -= 1;
      if(c!=0)
      cout << " ";
      while (c--)
      {
          if(c!=0)
          cout << c << " ";
        else
        {
            cout << c;
            
        }
      }
        cout << endl;
    }
}