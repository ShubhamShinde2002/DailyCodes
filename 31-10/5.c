// 5] Wap to allocate the memory of integer type & the free it memory without using free funtion

#include<stdlib.h>
#include<stdio.h>
void fun(){

	int *ptr=(int*)malloc(sizeof(int));

	*ptr=10;

	printf("%d\n",*ptr);

	int *ptr2=(int*)calloc(5,sizeof(int));

	for(int i=0; i<5; i++){

		scanf("%d",ptr2+i);
	}
	for(int i=0; i<5; i++){

		printf("%d\n",*(ptr2+i));
	}

	int *ptr1=(int*)realloc(ptr,0);
	int *ptr3=(int*)realloc(ptr2,0);

	printf("%d\n",*ptr);
	printf("%d\n",*ptr2);
}void main(){

	fun();
}
