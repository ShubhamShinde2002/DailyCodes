/*2 5 10
 *17 26 37
 50 65 82*/

#include<stdio.h>
void main(){
	int row;
	int x=1;

	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=row; j++){
			printf("%d ",x*x+1);
			x++;

		}
		
		printf("\n");
	
	}
}
