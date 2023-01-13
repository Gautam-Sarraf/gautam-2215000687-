#include<stdio.h>
#include<string.h>
int main(){
	int n,i,temp;
	printf("enter the size of your string: ");
	scanf("%d",&n);
	char str[n];
	printf("enter the string: ");
	for(i=0;i<n;i++){
	scanf("%c",&str[i]);
	}
		for(i=0;i<n/2;i++){
    temp=str[i];
    str[i]=str[n-i-1];
    str[n-i-1]=temp;
	}
	printf("the reverse is: ");
	for(i=0;i<n;i++){
		printf("%c",str[i]);
	}
}
