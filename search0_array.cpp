#include<stdio.h>
int main(){
	int n,i,j,first,last,mid;
	;
	printf("enter the size of an array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter the sorted element: ");
		scanf("%d",&a[i]);
	
	}
	printf("\n");
	printf("enter the element to be searched: ");
	scanf("%d",&j);
	first=0;
	last=n-1;
	while(first<=last){
		mid=(first+last)/2;
		if(a[mid]=j){
			printf("element found");
			break;
		}
		else if(a[mid]>j){
			last=mid-1;
		}
		else 
		    first=mid+1;
	}
	return 0;
}
