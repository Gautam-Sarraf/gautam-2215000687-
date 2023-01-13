#include<stdio.h>
int main(){
	int x[20],i,n,b; 
	printf("enter the size: ");
	scanf("%d",&n);
	
		printf("enter your elements: ");
		for(i=0;i<n;i++){
		scanf("%d\n",&x[i]);
}
  printf("enter the position: ");
  scanf("%d",&b);
  
  
 if(b==i) 
  printf("your element is: %d ",x[b]);
else
printf("invalid position");
  return 0;
}
