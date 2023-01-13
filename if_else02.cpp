#include<stdio.h>
int main()
{
	int marks;
	printf("put your marks here- ");
	scanf("%d",&marks);
	if(marks>=80){
		printf("first");}
		else if(marks>=60 && marks<=79){
			printf("second");}
			else if(marks>=40 && marks<=59){
				printf("third");
			}
		
  
   else{
		printf("fail");
	
	}
}
