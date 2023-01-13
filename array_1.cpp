#include<stdio.h>
int main(){
	int i,n;
	printf("enter array size: ");
	scanf("%d",&n);
	int x[n];

	for(i=0;i<=4;i++){
		printf("enter value: ");
		scanf("%d",&x[n]);
		printf("x[%d]= %d \n",i,x[n]);
	}
}
