//wap to claculatethe count of even and odd elements
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
	int count1=0;
	int count2=0;
	for(int i=0; i<size; i++){
		if(arr[i]%2==0){
		       count1=count1+1;
		}else{
			count2=count2+1;
		}
	}
	printf("Even no count is %d\n",count1);
	printf("Odd no count is %d\n",count2);
	
}
