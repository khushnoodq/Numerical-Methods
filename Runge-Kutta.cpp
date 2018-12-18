#include<stdio.h>
#include<conio.h>
#include<math.h>

float math(float x, float y)
{
float f;
f=sqrt(x+y);
return(f);
}

int main()
{
int i,n;
float x0,y0,x,h,k1,k2,k3,k4;

printf("Type the value of the point x where value of y to be found\n");
scanf("%f",&x);
printf("Type the initial value of x and y\n");
scanf("%f%f",&x0,&y0);
printf("Type the number of step length n\n");
scanf("%d",&n);
printf("x0=%f\t  y0=%f\t  n=%d \n",x0,y0,n);
//implementing runge-Kutta
h=(x-x0)/n;
for(i=1;i<=n;i++)
{
k1=h*math(x0,y0);
k2=h*math(x0+h/2,y0+k1/2);
k3=h*math(x0+h/2,y0+k2/2);
k4=h*math(x0+h,y0+k3);
y0+=(k1+2*k2+2*k3+k4)/6;
x0+=h;
}
printf("at x=%f\t,y=%f\n",x,y0);
getch();
}
