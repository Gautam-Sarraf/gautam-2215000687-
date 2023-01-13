#include<stdio.h>
int main(){
	char name[20];
	printf("enter your name: ");
	char *ptr;
	fgets(name,20,stdin);
	ptr = name;
	printf("your name: %s",name);
	 return 0;
	
}
