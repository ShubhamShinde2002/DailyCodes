//strcat

#include<stdio.h>
#include<string.h>

void main(){

	char str1[20]={'s','h','u','b','h','a','m','\0'};
	char *str2="shinde";

	puts(str1);
	puts(str2);

	strcat(str1,str2);

	puts(str1);
	puts(str2);
}
