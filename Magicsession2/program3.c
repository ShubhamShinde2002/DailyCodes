//wap toadd mtwo different arrays of same size
//Take array size and array element from user

#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int arr1[size];
	printf("Enter the elements in array\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr1[i]);
	}
	int arr2[size];
	printf("Enter the elements in array\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr2[i]);
	}
	for(int i=0; i<size; i++){
		printf("%d\n",arr1[i]+arr2[i]);
	}
	
	
}
