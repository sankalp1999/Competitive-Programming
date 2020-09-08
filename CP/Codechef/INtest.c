#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
   int t ,i,zero,one;
   int diff ;

   scanf("%d",&t);
   while(t--)
   {    char a[100001];
        zero = 0 ;
        one = 0 ;

        scanf("%s",&a);
        for(i=0;i<strlen(a);i++)
        {
            if (a[i] == '0')
            {zero++;}
            else if (a[i] == '1')
            {one++ ; }
        }
    diff = zero - one;
    diff = (int)fabs(diff);

    if (zero == 1)
    {printf("Yes\n");}
       else if (one == 1)
    {printf("Yes\n");}

    else
    {printf("No\n");}

    }





   return(0);


   }






