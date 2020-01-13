#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

int cmpfunc (const void * a, const void * b) {
    triangle* p = (triangle*)a ;
    triangle* q = (triangle*)b ;
    int a1 = p->a;
    int b1 = p->b;
    int c1 = p->c;
    double p1 = (a1 + b1 + c1)/2.0;
    double area1 = ((p1*(p1-a1)*(p1-b1)*(p1-c1)));
    
    int a2 = q->a;
    int b2 = q->b;
    int c2 = q->c;
    double p2 = (a2 + b2 + c2)/2.0;
    double area2 = ((p2*(p2-a2)*(p2-b2)*(p2-c2)));
   
   return ( (area1 - area2) );
}
void sort_by_area(triangle* tr, int n) {
    qsort(tr , n, sizeof(*tr), cmpfunc);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}