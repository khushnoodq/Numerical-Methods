#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n;
	float a[50],b[50],c[50],d[50],alpha[50],beta[50],x[50];
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the value of a:\n");
	for(i=2;i<=n;i++)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	printf("enter the value of b:\n");
	for(i=1;i<=n;i++)
	{
		printf("b[%d]=",i);
		scanf("%f",b[i]);
	}
	printf("enter the value of c :\n");
	for(i=1;i<=n-1;i++)
	{
		printf("c[%d]=",i);
		scanf("%f",&c[i]);
	}
	printf("enter the value of d :\n");
	for(i=1;i<=n;i++)
	{
		printf("d[%d]=",i);
		scanf("%f",&d[i]);
	}
	beta [1]=d[1]/b[1];
	alpha [1]=b[1];
	for(i=2;i<=n;i++)
	{
		alpha[i]=b[i]-(a[i]*c[i])/alpha[i-1];
		beta[i]=(d[i]-a[i]*beta[i-1])/alpha[i];
	}
	x[n]=beta[n];
	for(i=n-1;i>0;i--)
	{
		x[i]=beta[i]-(c[i]*x[i+1])/alpha[i];
	}
	printf("the solution of given system of equation is \n");
	for(i=1;i<=n;i++)
	{
		printf("x[%d]=%f\n",x[i]);
	}
	return 0;
}
