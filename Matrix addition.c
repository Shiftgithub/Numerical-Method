
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
   
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            printf("Enter a value of position a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
   
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            printf("Enter a value of position b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
   
     printf("-----------------Print Sumation of matrix------------------\n");
   
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
          c[i][j] = a[i][j]+b[i][j];
        }
    }
   
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
   
       return 0;
}
