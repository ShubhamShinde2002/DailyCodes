/*1 2 3 4
 *1 3 5 7
 1 4 7 10
 1 5 9 13*/

#include<stdio.h>
void main(){
	int x;
	int rows;
	int cols;


        printf("Enter the no of rows\n");	
        scanf("%d",&rows);

	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=0; i<rows; i++){
		x=1;

		for(int j=0; j<cols; j++){
			printf("%d ",x);
			x=x+i;
			x++;
		}
		printf("\n");

	}
}
