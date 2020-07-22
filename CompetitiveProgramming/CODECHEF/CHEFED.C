



#include <stdio.h>


/The next thing to note is that we are given
/ the constraint that N≤109. This means S(X) can at maximum be 81 for any X≤N. This is because the largest number below 109 is 999999999 whose digits add up to 81. The digits of 109 add up to 1 anyway. So, S(X)≤81, and
/we have that S(S(X))≤16 (maximum case is for 79). Summing
/ the two inequalities, we have that S(X)+S(S(X))≤97.

This gives us an efficient algorithm to calculate the number of integers that satisfy the equation. Since, S(X)+S(S(X))≤97, we just need to iterate from X = N−97 to N and check which integers satisfy the equation because no integer smaller than N−97 can satisfy the equation and neither can any integer greater than N.

long int sum(long int n)
{
    int i , j , rem ;
    int sum1 = 0 ;

    while(n!=0)
    {
        rem = n%10;
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
