//CALL BY VALUE


#include<stdio.h>
void callbyaddress(int *ptr);

void main(){
	int x=10;
	printf("%d\n",x);
	callbyaddress(&x);
	printf("%d\n",x);
}
void callbyaddress(int *ptr){


	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	*ptr=50;
	printf("%d\n",*ptr);

}
