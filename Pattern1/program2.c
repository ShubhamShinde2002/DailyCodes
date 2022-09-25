/* 1 2 3
   a b c
   1 2 3
   a b c*/

#include<stdio.h>
void main(){
	int row;
	int x;
	char ch;

	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=2; i++){
		x=1;
		for(int j=1; j<=3; j++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
		ch='a';
		for(int k=1; k<=3; k++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
