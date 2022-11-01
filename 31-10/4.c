// 4] Wap to allocate the memory to increase the no of friends in 3rd question.Use realloc

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

	int x;

	printf("Enter the increased no of friends\n");
	scanf("%d",&x);

	int *ptr1=(int*)realloc(ptr,x);

	for(int i=0; i<x; i++){

		scanf("%d",ptr1+i);
	}

	for(int i=0; i<x; i++){

		printf("%d\n",*(ptr1+i));

	}
	free(ptr1);

	
}
