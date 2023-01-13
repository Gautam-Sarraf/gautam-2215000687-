#include<stdio.h>
#include<math.h>
int main(){
	int n,i=0,sum=0,rem;
	printf("enter the binary number: ");
	scanf("%d",&n);
	while(n>0){
	rem= n%10;
	n /=10;
	sum =sum+pow(2,i)*rem;
	i +=1;
}
printf("the decimal value is: %d ",sum);
return 0;
}
