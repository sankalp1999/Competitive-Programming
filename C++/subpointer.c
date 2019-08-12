#include <stdio.h>
#include <string.h>
int main()
{   char txt[100];
    char pat[20] ;
    char *t = txt ;
    char *p = pat ;
    int i , j  ,found ,n,m;
    printf("Please enter the string . ");
    gets(txt);
    printf("\nPlease enter the pattern to be found . ");
    gets(pat);
    n = strlen(txt);
    m = strlen(pat);
    int count = 0 ;
    for(i=0;i<=n-m;i++)
    {   found = 1 ;
        for(j=0;j<m;j++)
        {
            if (*(t+i+j) != *(p+j))
            {
                found = 0 ;
                break ;
            }
        }
        if (found == 1 )
        {
            count++  ;
            printf("The index is %d\n",i);
        }
      }

    printf("The number of occurences of the word are %d\n",count);
    return(0);


}

