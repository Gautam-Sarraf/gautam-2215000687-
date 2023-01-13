#include<stdio.h>
int main()
{
	int n,i,pro;
	printf("put your number: ");
	scanf("%d",&n);
	pro=n;
	
	for(i=1;i<n;i++){
		pro *=i;
		
	}
	printf("the factorial of %d is: %d\n ",n,pro);
	return 0;
}
