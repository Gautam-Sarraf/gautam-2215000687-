#include<stdio.h>
int main(){
	int n,m,c=0,rem,sum=0,fac;
	printf("enter your number ");
	scanf("%d",&n);
	m=n;
	while(n>0){
		rem=n%10;
		fac=1;
		while(rem>0){
			fac=fac*rem;
			rem -=1;
		}
		sum +=fac;
		n /=10;
	}
	if(m==sum)
	printf("the number %d is an krishna murthy number\n",m);
	else 
	printf("the number %d is not an krishna murthy number\n",m);
	
	return 0;
}

