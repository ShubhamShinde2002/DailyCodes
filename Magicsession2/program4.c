//wap to array element in reerse order
//Take array size and array element from user

#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements in array\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=size-1; i>=0; i--){
		printf("%d\n",arr[i]);

	}
	
}
