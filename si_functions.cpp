#include<stdio.h> 

float si(float p,float t,float r){
	float s_i;
	s_i=(p*t*r)/100;
	printf("the sinple interest is %0.02f",s_i);
}
int main(){
	float prin,rate,time;
	printf("Enter thr principle: ");
	scanf("%f",&prin);
	printf("Enter thr rate: ");
	scanf("%f",&rate);
	printf("Enter thr time: ");
	scanf("%f",&time);
	si(prin,time,rate);
}
