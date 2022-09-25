/* 18 16 14
 * 12 10  8
 *  6  4  2*/

#include<stdio.h>
void main(){
	int row;
	int cols;
	int x=18;


	printf("Enter the no of rows\n");
	scanf("%d",&row);
	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=1; i<=row; i++){
		
		for(int j=1; j<=cols; j++){
			printf("%d ",x);
			x=x-2;

		}
		printf("\n");
	}
}
