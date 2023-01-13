#include<stdio.h>
int main(){
	int n,i,j,temp,b;
	printf("enter the size of an array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter the element: ");
		scanf("%d",&a[i]);
    }
    	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}
	printf("the sorted array is: ");
	 for(i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }
	 printf("\n");
a[i-4]= b;
printf("the fourth largest number is: ",b);
return 0;
}

