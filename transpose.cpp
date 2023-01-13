#include<stdio.h>
int main(){
	int m,n,i,j,count=0;
	printf("Enter the rows and columns: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter your element: ");
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			count++;
		}
	}
	printf("the created matrix is:  \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");}
		
			printf("the transpose matrix is:  \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}

	
	return 0;
}
