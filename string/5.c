#include<stdio.h>
void main(){

	char pName[]={'r','o','h','i','t','\0','v','a','d','a'};
	char *name="ViratK";

	printf("%ld\n",sizeof(pName));
	puts(pName);

	for(int i=0; i<11; i++){
		printf("%c",pName[i]);

	}
	printf("\n");

	for(int i=0; i<7; i++){
		printf("%c",*(name+i));
	}
	printf("\n");

}
