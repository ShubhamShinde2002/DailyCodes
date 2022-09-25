/* 1 3 5
 * 7 9 11
 * 13 15 17*/

#include<stdio.h>
void main(){
	int row;
	int x=1;

	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		
		for(int j=1; j<=row; j++){
			printf("%d ",x);
			x=x+2;

		}
		
		printf("\n");
	
	}
}
