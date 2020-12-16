#include<bits/stdc++.h>

/* 
Log n * complexity for DSU with path compression.
*/

using namespace std;

int p[300010];
int size[300010];
int minele[300010];
int maxele[300010];


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
    minele[b] = min(minele[a], minele[b]);
    maxele[b] = max(maxele[a], maxele[b]);

    if(b!=a) // Should not be connected or in the same set.
    size[b] += size[a];
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n, m;
   cin >> n >> m;
   
   for (int i = 0; i <= 300010; i++)
   {
       p[i] = i;
       size[i] = 1;
       minele[i] = i;
       maxele[i] = i;
   }

       while (m--)
       {
           string s;
           int a, b;
           cin >> s;
           if (s == "union")
           {
               cin >> a >> b;
               union1(a, b);
           }
           else
           {
               cin >> a;
               int p = get(a);
               cout << minele[p] << " " << maxele[p] << " " << size[p] << endl;
           }
       }
}