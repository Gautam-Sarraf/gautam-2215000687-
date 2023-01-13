#include<stdio.h>
#include<math.h>
int main(){
	int n,m,c=0,rem,sum=0,o;
	
	printf("enter the number to be checked: ");
	scanf("%d",&n);
	
	m=n;
	o=m;
	while(n>0){
	c +=1;
	n /=10;
}
while(m>0){
	rem=m%10;
	sum=sum+pow(rem,c);
	m /=10;
	
}
if(sum==o)
   printf("the number %d is an armstrong number",o);
else
   printf("the number %d is not an armstrong number",o);
	
	
}
