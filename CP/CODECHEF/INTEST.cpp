#include <stdio.h>

int main() {
	long int a ;
	int i ;
	int count = 0 ;
    int n , k ;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a);
        if (a%k == 0 ){count++ ; }


    }
    printf("%d",count);
	return 0;
}

