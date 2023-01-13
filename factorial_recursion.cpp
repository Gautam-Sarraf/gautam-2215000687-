#include<stdio.h>
int fact(int x){
	if (x==0)
           return 1;
	else
		   return x*(fact(x-1));	
}
int main(){
	int n;
	printf("enter the value: ");
	scanf("%d",&n);
	printf("the factorial is: %d\n",fact(n));
}
