#include<stdio.h>
void main(){
	int x=10;
	int y=20;
	int z;


	int *ptr1=&x;
	int *ptr2=&y;

	z=*ptr1;
	*ptr1=*ptr2;
	

	printf("x=%d\n",*ptr1);
	printf("y=%d\n",z);

}
