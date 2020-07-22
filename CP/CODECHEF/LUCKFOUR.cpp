#include <stdio.h>
int main(void)
{   int  t = 1;
    int count  ;
    int n ;
    count = 0 ;
    scanf("%d",&t);
    // enter the number

    //printf("PLease enter the number . ");
    for(int i = 0 ; i< t ; i++){
    scanf("%d",&n);

    int r = 0  ;

    while(n>0){
        r = n;
        if (r == 4 )
        {count++;}
        n= n/10;
        }
    printf("%d\n",count);
    count = 0 ;}
    return(0);
    }


