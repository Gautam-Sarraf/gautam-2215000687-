#include<stdio.h>
int main()
{
	float feet1,feet2,inch1,inch2,total_feet,total_inch,net_feet,net_inch;
	printf("The value of first feet: ");
	scanf("%f",&feet1);
	printf("The value of first inch: ");
	scanf("%f",&inch1);
	printf("The value of second feet: ");
	scanf("%f",&feet2);
	printf("The value of second inch: ");
	scanf("%f",&inch2);
	total_feet=feet1+feet2;
	total_inch=inch1+inch2;
	net_feet=total_feet+(int)total_inch/12;
	net_inch=(int)total_inch%12;
	printf("the net feet is %f and net inch is %f",net_feet,net_inch);
	return 0;
	
}
