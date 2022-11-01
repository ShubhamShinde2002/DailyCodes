#include<stdio.h>
void funarr(int(*arr)[4]){
	printf("%p\n",arr);
}
void main(){

	int arr[]={10,20,30,40};
	funarr(&arr);
	funarr(&arr[1]);
}
