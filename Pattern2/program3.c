/*4 3 2 1
 *5 4 3 2
  6 5 4 3
  7 6 5 4*/

#include<stdio.h>
void main(){
	int row;
	int x;

	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		x=3+i;
		for(int j=1; j<=row; j++){
			printf("%d ",x);
			x--;

		}
		printf("\n");
	}
}
