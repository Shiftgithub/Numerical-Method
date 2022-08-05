#include<stdio.h>
#include<math.h>
#define E 0.001
#define f(x) x*x-3*x+2
#define df(x) 2*x-3
int main()
{
    float x0,x1,f0,f1,df0;
    int i = 0;
    printf("Enter the value of x0 : ");
    scanf("%f",&x0);
    while(1)
    {
        i++;
        printf("\nIteration no : %d\n\n",i);
        f0 = f(x0);
        df0 = df(x0);
        if(df0 == 0)
        {
            printf("Mathematical error.");
            break;
        }
        else
        {
            x1 = x0 - (f0/df0);
            printf("value of x1 : %f\n\n",x1);
            f1 = f(x1);
            x0 = x1;
        }
        if(fabs(f1)<E)
        {
            printf("root = %f\n",x1);
            break;
        }
    }

    return 0;
}
