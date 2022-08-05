#include<stdio.h>
#include<math.h>
#define E 0.0001
#define MAX 20
#define F(x) x*x-4*x-10

int main()
{
    int i=1;
    float x1,x2,x3,f1,f2,z,root;

    printf("Enter the value of x1 : ");
    scanf("%f",&x1);
    printf("Enter the value of x2 : ");
    scanf("%f",&x2);

begin:
    f1 = F(x1);
    f2 = F(x2);

    x3 = x2-f2*(x2-x1)/(f2-f1);

    z = fabs((x3-x2)/x3);
    printf("value of iterations %d is %f\n",i,x3);

    if(fabs((x3-x2)/x3)<E)
    {
        printf("root is %f\n",x3);

    }

    else
    {
        x1=x2;
        f1=f2;
        x2=x3;
        i++;
        if(i<MAX)
            goto begin;
        else
        {
            printf("Mathematical Error!!!");
        }
    }
    return 0;
}
