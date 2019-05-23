#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float);
float f1(float);
float f(float x)
{
      return(pow(x,3)-8*x-4);
}
float f1(float x)
{
      return(3*pow(x,2)-8);
}
main()
{
      float e, x, x1;
      int k=0;
      printf("Enter the values of x");
      scanf("%f",&x);
      printf("Enter the value of e");
      scanf("%f",&e);
       do
                     {
                         x1=x;
                         x=x-(f(x)/f1(x));
                         k++;
                     }
                     while(fabs(x-x1)>e);
                     printf("%f %d", x, k);
      getch();
}
