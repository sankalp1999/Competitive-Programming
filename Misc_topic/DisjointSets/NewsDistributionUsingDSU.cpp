#include<bits/stdc++.h>

/* 
Log n * complexity for DSU with path compression.
*/

using namespace std;
const int max1 = 5e5 + 1;
int p[max1];
int size[max1];


/* Path compression */
int get(int a)
{
    if(p[a] != a)
    {
        p[a] = get(p[a]); // Set all pointers to the leader/root while climbing up once you get it.
    }
    return p[a];
}

void union1(int a, int b)
{
    a = get(a);
    b = get(b);
    if(size[a] > size[b])
    {
        swap(a, b);
    }
    // a is smaller than b. Add small to larger.
    p[a] = b;

    if(b!=a) // Should not be connected or in the same set.
    size[b] += size[a];
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   
   for (int i = 0; i <= max1; i++)
   {
       p[i] = i;
       size[i] = 1;

   }
   int n, m;
   cin >> n >> m;
   for (int i = 1; i <= m; i++)
   {
       int k;
       cin >> k;
       int last;
       for (int j = 0; j < k; j++)
       {
           int temp;
           cin >> temp;
           if(j == 0)
               last = temp;
            if(j != 0)
            {
                union1(last, temp); // Join component
            }
       }
   }
   for (int i = 1; i <= n; i++)
   {
       // Get the component in which it belongs. Don't blindly put i
       cout << size[get(i)] << " ";
   }
   return 0;
}