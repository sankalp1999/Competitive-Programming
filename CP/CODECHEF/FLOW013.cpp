#include <stdio.h>

int main(void) {
    int t , a , b ,c , i  ;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if (a+b+c == 180){printf("YES\n");}
        else if (a+b+c != 180){printf("NO\n");}
    }
	// your code goes here
	return 0;
}

