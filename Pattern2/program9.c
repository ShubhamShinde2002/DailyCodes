/* 1 3 8
 * 15 24 35
 * 48 63 80*/

#include<stdio.h>
void main(){
	int row;
	int cols;
	int x=1;


	printf("Enter the no of rows\n");
	scanf("%d",&row);
	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=1; i<=row; i++){
		
		for(int j=1; j<=cols; j++){
			printf("%d ",x*x-1);
			x++;
			

		}
		printf("\n");
	}
}
