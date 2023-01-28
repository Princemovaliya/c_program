//Created_by 22DCE_057
#include<stdio.h>

int main() 
{
    int a[3][3],b[3][3],c[3][3],k,i,j;
    //for raw
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
        }
    
    printf("\n");
    }
    /*for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
        printf("%d",a[i][j]);
        }
        printf("\n");
    } */
        // b matrix
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("b[%d][%d]",i,j);
        scanf("%d",&b[i][j]);
        }
    
    printf("\n");
    }
   /* for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
        printf("%d",b[i][j]);
        }
        printf("\n");
    }*/
    //multi
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        c[i][j]=0;
        
        for(k=0;k<3;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
        }
        printf("\n");
    }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\t %d",c[i][j]);
            }
            printf("\n");
        }
    printf("22DCE057_PRINCE");
}

