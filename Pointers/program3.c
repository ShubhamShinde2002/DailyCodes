#include<stdio.h>
void main(){
	int x=3;
	char y='A';

	int *ptr1=&x;
	char *ptr2=&y;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
	printf("%d\n",*ptr1);
	printf("%d\n",*ptr1);
}
