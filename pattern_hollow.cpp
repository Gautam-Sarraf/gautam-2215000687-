#include<stdio.h>
int main(){
	int n,i,j;
	printf("enter the value: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
	  for(j=1;j<=n;j++){
	  	if(i==1||i==n||j==1||j==n)
	  	
	  	printf("%c",j+96);
	  	else
	  	printf(" ");
	  }
	  printf("\n");
	}
	return 0;
}
