/*1 2 3 4
  2 3 4 5
  3 4 5 6
  4 5 6 7*/

#include<stdio.h>
void main(){
	int row;
	int x;
	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		x=i;
		for(int j=1; j<=row; j++){
			printf("%d ",x);
			x++;

		}
		
		printf("\n");
	
	}
}
