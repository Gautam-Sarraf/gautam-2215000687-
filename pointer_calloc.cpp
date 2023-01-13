#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,*ptr=NULL;
printf("enter the no: ");
scanf("%d",&n);
ptr = (int*) calloc(n,sizeof(int));
for(i=0;i<n;i++){
	scanf("%d",ptr);
}
return 0;
}
