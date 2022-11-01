// 3] Wap to allocate the memory for salary of n friends. Use calloc

#include<stdlib.h>
#include<stdio.h>
void main(){

	int n;

	printf("Enter the no of friends\n");
	scanf("%d",&n);

	int *ptr=(int*)calloc(n,sizeof(int));

	for(int i=0; i<n; i++){

		scanf("%d",ptr+i);

	}
	for(int i=0; i<n; i++){

		printf("%d\n",*(ptr+i));
	}
	free(ptr);

	
}
