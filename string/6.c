#include<stdio.h>
void main(){
	char cName[]={'V','i','r','a','t','\0'};
	char *fname1="Messi";
	char *fname2="NeymarJr";
	char *fname3="Messi";

	printf("%p\n",cName);
	printf("%p\n",fname1);
	printf("%p\n",fname2);
	printf("%p\n",fname3);
}
