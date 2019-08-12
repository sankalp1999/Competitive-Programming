#include <stdio.h>
int main()
{
    int i , j  ;
    i = 5 ; 
    j = 10 ;
    printf("%d\n",i);
    printf("%d\n",j);
    int mat[5][5];
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&mat[i][j]) ; 
            }
        }

     for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",mat[i][j]) ; 
            }printf("\n");
        }    
    return(0);

}