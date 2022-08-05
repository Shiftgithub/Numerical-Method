#include<stdio.h>
#include<math.h>
#define E .01

int main()
{
    int number;
    printf("------------------------------------------------\n");
    printf("Please enter 1 for bi-section method \n");
    printf("Please enter 2 for false position method \n");
    printf("Please enter 3 for New ton rafsan method \n");
    printf("Please enter 4 for secant method \n");
    printf("Please enter 5 for matrix addition \n");
    printf("Please enter 6 for matrix substration \n");
    printf("Please enter 7 for jacobi method \n");
    printf("Please enter 8 for gauss seidel method \n");
    printf("------------------------------------------------\n");
    printf("Enter a number : ");
    scanf("%d",&number);

    if(number = 1)
    {

#define F(x) 2*x*x*x-2*x*x-5
        int i=1;
        float x1,x2,f1,f2,x0,f0,root,z;
        printf("Enter the values of x1:");
        scanf( "%f",&x1);
        printf("Enter the values of x2:");
        scanf( "%f",&x2);

        while(1)
        {
            f1=F(x1);
            f2=F(x2);
            if((f1*f2)>0)
            {
                printf("Mathematical error.");
                break;
            }
            else
            {
                x0=(x1+x2)/2;

                f0=F(x0);
                printf("value of iterations %d is %f\n",i,x0);
                i++;

                if((f1*f0)<0)
                {
                    x2=x0;
                }
                else
                {
                    x1=x0;
                }
                z = fabs((x2-x1)/x2);
                printf("value of Z is %f\n",z);
            }
            if(fabs((x2-x1)/x2)<E)
            {
                root=(x1+x2)/2;
                printf("root is %f",root);
                break;
            }
        }

    }
    else if(number = 2)
    {

#define F(x) 2*x*x*x-2*x*x-5
        int i = 1;
        float x0,x1,x2,f0,f1,f2,z,root;

        printf("Enter the value of x1 : ");
        scanf("%f",&x1);
        printf("Enter the value of x2 : ");
        scanf("%f",&x2);

        while(1)
        {
            f1=F(x1);
            f2=F(x2);
            if((f1*f2)>E)
            {
                printf("Mathematical Error!!!");
                break;
            }
            else
            {
                i++;
                x0=x1-(f1*(x2-x1))/(f2-f1);
                f0=F(x0);
                printf("value of iterations %d is %f\n",i,x0);
                if((f1*f0)<0)
                {
                    x2=x0;
                }
                else
                {
                    x1=x0;
                }
            }
            z = fabs((x2-x1)/x2);
            printf("Value of Z is %f\n",z);

            if(fabs((x2-x1)/x2)<E)
            {
                root=(x1+x2)/2;
                printf("root is %f",root);
                break;
            }
        }
    }
    else if(number = 3)
    {
#define E 0.001
#define f(x) x*x-3*x+2
#define df(x) 2*x-3
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
    }
    else if(number = 4)
    {
#define E 0.0001
#define MAX 20
#define F(x) x*x-4*x-10
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
    }
    else if(number=5)
    {
        int a[3][3], b[3][3], c[3][3], i, j;

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf ("Enter a value of position a[%d][%d] : ", i, j);
                scanf ("%d",&a[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf ("%d\t", a[i][j]);
            }
            printf ("\n");
        }

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf ("Enter a value of position b[%d][%d] : ", i, j);
                scanf ("%d",&b[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf ("%d\t", b[i][j]);
            }
            printf ("\n");
        }

        printf ("\nPrint Summation of matrix\n");

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf ("%d\t",c[i][j]);
            }
            printf ("\n");
        }
    }
    else if (number =6)
    {
        int a[3][3], b[3][3], c[3][3], i, j;

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf ("Enter a value of position a[%d][%d] : ", i, j);
                scanf ("%d",&a[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf ("%d\t", a[i][j]);
            }
            printf ("\n");
        }

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf ("Enter a value of position b[%d][%d] : ", i, j);
                scanf ("%d",&b[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf ("%d\t", b[i][j]);
            }
            printf ("\n");
        }

        printf ("\nPrint Summation of matrix\n");

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
            }
        }

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf ("%d\t",c[i][j]);
            }
            printf ("\n");
        }
    }
    else if(number = 7)
    {

#define X(y,z) ((12-2*y-z)/5)
#define Y(x,z) ((15-x-2*z)/5)
#define Z(x,y) ((20-x-2*y)/5)
        float x1,x2,y1,y2,z1,z2;

        printf("enter the initial value of x :");
        scanf("%f",&x1);
        printf("enter the initial value of y :");
        scanf("%f",&y1);
        printf("enter the initial value of z :");
        scanf("%f",&z1);

        while(1)
        {
            x2 = X(y1,z1);
            y2 = Y(x1,z1);
            z2 = Z(x1,y1);

            if((fabs(x2-x1)<E)&&(fabs(y2-y1)<E)&&(fabs(z2-z1)<E))
            {
                printf("value of x is %f\n",x2);
                printf("value of y is %f\n",y2);
                printf("value of z is %f\n",z2);
                break;
            }
            else
            {
                x1=x2;
                y1=y2;
                z1=z2;
            }
        }
    }
    else if(number = 8)
    {

#define X(y,z) ((12-2*y-z)/5)
#define Y(x,z) ((15-x-2*z)/5)
#define Z(x,y) ((20-x-2*y)/5)

        float x1,x2,y1,y2,z1,z2;

        printf("enter the initial value of x :");
        scanf("%f",&x1);
        printf("enter the initial value of y :");
        scanf("%f",&y1);
        printf("enter the initial value of z :");
        scanf("%f",&z1);

        while(1)
        {
            x2 = X(y1,z1);
            y2 = Y(x1,z1);
            z2 = Z(x1,y1);

            if((fabs(x2-x1)<E)&&(fabs(y2-y1)<E)&&(fabs(z2-z1)<E))
            {
                printf("value of x is %f\n",x2);
                printf("value of y is %f\n",y2);
                printf("value of z is %f\n",z2);
                break;
            }
            else
            {
                x1=x2;
                y1=y2;
                z1=z2;
            }
        }
    }
    return 0;
}
