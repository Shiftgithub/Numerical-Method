#include<stdio.h>
#include<math.h>
#define E .01
#define X(y,z) ((12-2*y-z)/5)
#define Y(x,z) ((15-x-2*z)/5)
#define Z(x,y) ((20-x-2*y)/5)

int main()
{
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
return 0;

}

