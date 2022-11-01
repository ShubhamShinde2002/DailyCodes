//strcmp
//

#include<stdio.h>
#include<string.h>

void main(){

	char *str1="shubz";
	char *str2="shubham";

	int diff = strcmp(str1,str2);

	printf("%d\n",diff);

	if(diff==0)

		printf("string are equal\n");

	else
		printf("string are not equal\n");
}
