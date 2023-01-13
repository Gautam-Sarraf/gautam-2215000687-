#include<stdio.h>
int main(){
	int n,i,j,sum=0,m;
	printf("enter the rows and column: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
    printf("enter the elements: ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
		if(i==j)
		     sum += a[i][j];
}
	}
	printf("the matrix created is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("the sum of the diagonal is: %d\n",sum);
}
	
