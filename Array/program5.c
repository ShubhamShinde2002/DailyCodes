// USING FLAG 
#include<stdio.h>
void main(){
	int size;
	int arr[size],search;
	printf("Enter the size of array:\n");
	scanf("%d",&size);

	printf("Enter the array element:\n");

	for(int i=0; i<=size; i++){
		scanf("%d",&arr[i]);

	}
	
	int flag=0;
		for(int i=0; i<size; i++){
			if(arr[i]%4==0 && arr[i]%5==0){
				flag=1;
			}
		}
		if(flag==1){
			printf("found\n");

		}else{
			printf("not found\n");
		}

	
	
}
