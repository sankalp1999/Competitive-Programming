#include <stdio.h>
#include <stdlib.h>
// by manipulating heron's formula
// no need to use float arithmetic
// can only do this
// (a + b + c)*(a + b - c)*(a - b + c)*(-a + b + c);
struct Triangle
{
   int a, b, c;
};

int square(struct Triangle t)
{
    int a = t.a, b = t.b, c = t.c;
    return (a + b + c)*(a + b - c)*(a - b + c)*(-a + b + c);
}

void sort_by_square(struct Triangle* a, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (square(a[i]) > square(a[j]))
            {
                struct Triangle temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main()
{
   int n;
   scanf("%d", &n);
   struct Triangle *a = calloc(n, sizeof(struct Triangle));
   for (int i = 0; i < n; i++)
      scanf("%d%d%d", &a[i].a, &a[i].b, &a[i].c);
   sort_by_square(a, n);
   for (int i = 0; i < n; i++)
      printf("%d %d %d\n", a[i].a, a[i].b, a[i].c);
   return 0;
}