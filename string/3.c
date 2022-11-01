//FUNCTION GETS

#include<stdio.h>
void main(){
	char name[20];

	printf("Enter string:\n");
	gets(name);

	printf("%s\n",name);
	puts(name);
}
