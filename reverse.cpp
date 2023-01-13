#include<stdio.h>
int main()
{
	int n,reverse=0,rem;
	printf("put your number is- ");
	scanf("%d",&n);
	while(n!=0){
	rem= n%10;
	reverse= reverse*10+rem;
	n=n/10;}
	
	printf("the reverse of number is %d",reverse);
	return 0;
}
