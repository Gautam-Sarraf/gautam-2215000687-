#include<stdio.h>
int main()
{
	int ID=14567;
	int pass=777;
	printf("put your id here: ");
	scanf("%d",&ID);
	
	switch(ID){
		case 14567:printf("put your password here: ");
		           scanf("%d",&pass);
		    
		    
	     switch(pass){
		case 777:printf("WELCOME\n");
		break;
		default:printf("invalid pass");
	}
	default:("invalid ID");
	
}

}
