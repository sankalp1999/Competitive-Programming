#include <stdio.h>
#include <string.h>
int main()
{   char txt[100];
    char pat[20] ;

    int i , j  ,found ,n,m , k1;
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
            if (txt[i+j] != pat[j])
            {
                found = 0 ;
                break ;
            }
        }
        if (found == 1 )
        {
            count++  ;
            printf("The index is %d\n",i);

            for(int k = 0 ; k < m  ; k++)
            {
               for( k1 = i ;txt[k1] != '\0'; k1++)
                {txt[k1] = txt[k1+1];

                 printf("\n");

                }
                 if (txt[k1+1] == ' ')
                 {
                    txt[k1] = txt[k1 + 1 ];
                 }
                puts(txt);
            }
        }
      }

    printf("The number of occurences of the word are %d\n",count);
    puts(txt);
    return(0);


}

