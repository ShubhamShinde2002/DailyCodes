/* A B C
 * D E F
 * G H I*/
#include<stdio.h>
void main(){
	int row;
	char ch='A';

	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int k=1; k<=row; k++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
