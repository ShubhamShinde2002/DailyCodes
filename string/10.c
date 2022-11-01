// WITHOUT USING strlen FINDING STRING LENGTH

#include<stdio.h>

int mystrlen(char *str){

	int count=0;
	while(*str!='\0'){

		count++;
		str++;
	}
	return count;
}

void main(){

	char name[]={'K','L','R','A','H','U','L','\0'};
	char *str="Virat";

	printf("%d\n",mystrlen(name));
	printf("%d\n",mystrlen(str));
}
