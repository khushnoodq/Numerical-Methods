#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun(int a)
{
return(4*a-(a*a)/2.0);
}
main()
{
int X,T;
float u[10][10],h,k,c,al,us,ue;
int j,i;
printf("\n enter the value of h,k");
scanf("%f %f",&h,&k);
printf("\n enter the value of partition of horizontal axis 'X':");
scanf("%d",&X);
printf("\n enter the value of partition of vertical axis 'T':");
scanf("%d",&T);
printf("\n enter the value of 'c':");
scanf("%f",&c);
al=0.5;
printf("\n enter the value of u[0,t]:");
scanf("%f",&us);
printf("\n enter the value of u[%d,t]:");
scanf("%f",&ue);
for(i=0;i<=T;i++)
u[0][i]= u[X][i]=us;
for(j=i;j<=X-1;j++)
u[j][0]= fun(j);
for(i=0;i<=T-1;i++)
for(j=i;j<=X-1;j++)
u[j][i+1]=al*u[j-1][i]+(1-2*al)*u[j][i]+al*u[j+1][i];
printf("the value of u[j,i] are : \n");
for(i=0;i<T;i++)
{
for(j=0;j<X;j++)
printf("%7.4f\t", u[j][i]);
printf("\n");
}
}
