// 2] Wap to show the use of dangling pointer in malloc

#include<stdlib.h>
#include<stdio.h>

void fun(){
	
	int *ptr1=(int*)malloc(sizeof(int));

	*ptr1=10;

	int *ptr2=&ptr1;

	free(ptr1);

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
}void main(){

	fun();
}

