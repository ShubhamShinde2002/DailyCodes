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
	int search;
	printf("Enter the search element in array\n");
	scanf("%d",&search);
	for(int i=0; i<size; i++){
		if(search==arr[i]){
			printf("%d is present",arr[i]);
		}
	}
	
}
