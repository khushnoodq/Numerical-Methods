/*Euler method */
# include <stdio.h>
# include <conio.h>
int main()
{
int c=0;
float x,y,xp,h,dy,i,n;
float f(float,float);
printf("Solution by Euler Method\n");
printf("Enter initial Boundry condition x,y : ");
scanf("%f%f",&x,&y);
printf("Enter Value of X at which Y is required : ");
scanf("%f",&xp);
printf("Enter Interval ,h : ");
scanf("%f",&h);
printf(" No. \t X\t f(x,y) \t Y\n");
printf("----------------------------------------------------------\n");
for(i=x;i<=xp;i=i+h)
{
c++;
n=y+h*f(i,y);
printf("%2d\t %2.3f\t %5.5f\t %5.6f\n",c,i,f(i,y),n);
y=n;
}
printf("----------------------------------------------------------\n");
printf("Value of y @ %f is %f",xp,n);
getch();
}
float f(float x,float y)
{
return (y-x)/(y+x);
}
