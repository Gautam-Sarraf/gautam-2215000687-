#include<stdio.h>
int main(){
	int i,n;
	printf("enter array size: ");
	scanf("%d",&n);
	int x[n];

	for(i=0;i<n;i++){
		printf("enter value: ");
		scanf("%d",&x[i]);
	}
	printf("the array is:\n ");
	for(i=0;i<n;i++){
		printf("%d\n",x[i]);
	}
	printf("\n");
	return 0;
}
