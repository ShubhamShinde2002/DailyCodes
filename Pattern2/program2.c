/*4 4 4 4
 * 3 3 3 3
 * 2 2 2 2
 *  1 1 1 1*/

#include<stdio.h>
void main(){
	int row;
	int cols;
	int x=4;


	printf("Enter the no of rows\n");
	scanf("%d",&row);

	printf("Enter the no of cols\n");
	scanf("%d",&cols);


	for(int i=1; i<=row; i++){
		
		for(int j=1; j<=cols; j++){
			printf("%d ",x);


		}
		printf("\n");
		x--;
		
	}
}
