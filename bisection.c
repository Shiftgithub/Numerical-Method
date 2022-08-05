#include<stdio.h>
#include<math.h>
#define E .8
#define F(x) x*x*x-x-1

int main()
{
    float x1,x2,x0,f1,f2,f0,root;
    int i=1;


    printf("Enter the value of x1:");
    scanf("%f",&x1);
    printf("Enter the value of x2:");
    scanf("%f",&x2);

    while(1)
    {
        f1=F(x1);
        f2=F(x2);
        if((f1*f2)>0)
        {
            printf("x1 and x2 are not correct");
            break;
        }

        else
        {
            x0=x1-((f1*(x2-x1))/(f2-f1));
            f0=F(x0);
         /*   printf("Value of Iteration %d is %f\n",i,x0);
            i++;
*/

            if((f1*f0)<0)
            {
                x2=x0;
            }
            else
            {
                x1=x0;
            }
        }
float z=fabs((x2-x1)/x2);
            printf(" %f",z);
        if(fabs((x2-x1)/x2)<E)
        {
            root=x1-((f1*(x2-x1))/(f2-f1));
            printf("Root is %f",root);
            break;
        }
    }


}
