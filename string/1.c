#include<stdio.h>
void main(){
	char carr[]={'C','o','r','e','2','w','e','b','\0'};
	char *str="Core2web";

	puts(carr);
	puts(str);

	carr[4]='3';
	//*str='B'
	puts(str);
	puts(carr);



}
