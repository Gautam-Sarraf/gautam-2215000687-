#include<stdio.h>

float avg(float n,float i,float sum){

     float average;
     average= sum/n;
     printf("the average of marks of students is %0.2f",average);
 }
 
 int main(){
 	float n,i,sum;
 	printf("enter the number of students: ");
 	scanf("%f",&n);
 	printf("enter the marks: ");
 	for(i=0;i<n;i++){
 		scanf("%d",i);
 		sum+= i;
	 }
	 printf("\n");
 }
