// 1]wap to allocate a memory of float type. Take value from user and print it. Use Malloc function


#include<stdlib.h>
#include<stdio.h>
void fun(){

	float *ptr=(float*)malloc(sizeof(float));

	printf("Enter value\n");
	scanf("%f",ptr);

	printf("%f\n",*ptr);



}void main(){
	fun();
}
