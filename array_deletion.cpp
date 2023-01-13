#include<stdio.h>
int main(){
	int a[100],n,i,ind;
	printf("enter the size:");
	scanf("%d",&n);
	
	printf("enter yoyur elements:");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	
	printf("enter the index to be deleted:");
	scanf("%d",&ind);
	for(i=ind;i<n-1;i++){
		a[i]=a[i+1];
	}
	a[n]=0;
	printf("the updated arroy is: ");
	for(i=0;i<n-1;i++){
		printf("%d\n",a[i]);
	}
	printf("\n");
	return 0;
}
