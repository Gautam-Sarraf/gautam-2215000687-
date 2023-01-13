#include<stdio.h>
int main(){
	int m,n,i,j,flag=1;
	printf("Enter the rows and columns: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter your element: ");
			scanf("%d",&a[i][j]);
		if(i==j&&a[i][j]!=1 || i!=j&&a[i][j]!=0)
		flag=0;
		}
	}
	printf("the created matrix is:  \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	if(flag)
	printf("it is an identity matrix\n");
	else
	printf("its not an identity matrix\n");
	
	return 0;
}
