#include<stdio.h>
#include<string.h>

int sum(int x){
	if(x==0)
	return 0;
	else 
	return x+sum(x-1);
	
}
int main(){
	int n;
	printf("enter your number: ");
	scanf("%d",&n);
	printf("sum is : %d",sum(n));
}

