#include<stdio.h>
int main()
{
	int a,b,c;
	printf("first number: ");
	scanf("%d",&a);
	printf("second number: ");
	scanf("%d",&b);
	printf("third number: ");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("maximum is %d",a):printf("maximum is %d",c):(b>c)?printf("maximum is %d",b):printf("maximum is %d",c);
}
