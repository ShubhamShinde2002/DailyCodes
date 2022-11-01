#include<stdio.h>
void main(){
	char arr[20];

	printf("enter Player Name:\n");
	gets(arr);

	puts(arr);

	char *str=arr;

	puts(str);
}
