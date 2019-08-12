#include <stdio.h>
#include <math.h>
int main()
{   int i , t ;
    scanf("%d",&t);
for(i=0;i<t;i++){
    int n1,n2,d,c ,r1,r2 ,sum,c2,main,d2;
    c = 0 ;
    sum = 0 ;
    main = 0 ;
    c2 = 0  ;
    scanf("%d %d",&n1,&n2);
    if (n1>n2) {
       d = n1   ;     }
    else {
         d = n2     ;   }
     d2 = d ;

    while(d!=0)
    {
        d= d/10 ;
        c++;
    }
    while(d2!=0)
    {   d2 = d2/10;
        r1 = n1%10;
        n1 = n1/10;
        r2 = n2%10;
        n2 = n2/10;
        sum = (r1+r2)%10;
        main = main + sum*pow(10,c2);
        c2 = c2 + 1 ;


    }


    printf("%d\n",main);}
    return(0);

}
