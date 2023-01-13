#include<stdio.h>
int main(){
	int n,i,j;
	printf("enter the value for pattern: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
	  for(j=1;j<=i;j++){
	  	if(j==1||i==n||j==i)
	  	
	  	printf("*");
	  	else
	  	printf(" ");
	  }
	  printf("\n");
	}
	return 0;
}
