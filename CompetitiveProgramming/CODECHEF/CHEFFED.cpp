#include <stdio.h>
long int sum(long int n)
{
    int i , j , rem ;
    int sum1 = 0 ;

    while(n!=0)
    {
        rem = n;
        sum1 = sum1 + rem;
        n = n/10;}




return sum1 ;
    }






int main()
{
    long int n  ,i,  x,x1;
    int count = 0 ;
    scanf("%ld",&n);
    if (n>1000){
   for(i=n-1000;i<=n;i++)
   {   x = sum(i);

       x1 = sum(x);

        if (i+x+x1 == n)
        {   count = count + 1 ;
      //  printf("%d\n",x);

         //     printf("%d\n",x1);
           //  printf("%d\n",i);
        }


    }}
     if (n<1000){
   for(i=0;i<=n;i++)
   {   x = sum(i);

       x1 = sum(x);

        if (i+x+x1 == n)
        {   count = count + 1 ;
      //  printf("%d\n",x);

         //     printf("%d\n",x1);
           //  printf("%d\n",i);
        }


    }}
    

    printf("%d",count);

    return(0);

}
