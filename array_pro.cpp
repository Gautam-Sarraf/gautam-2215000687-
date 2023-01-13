#include<stdio.h>
int main(){
	int marks[100],freq[40],i;
for(i=0;i<10;i++){
printf("enter the marks of students %d: ",i+1);
scanf("%d",&marks[i]);
if(marks[i]>60)
freq[marks[i]-61]++;
}
printf("\n\n");
for(i=0;i<40;i++){
	if(freq[i]>0)
	printf("%d marks is scored by %d students\n",i+61,freq[i]);
}
return 0;
}
