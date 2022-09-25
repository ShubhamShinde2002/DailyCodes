/*I H G
 *F E D
 C B A*/

#include<stdio.h>
void main(){
	int row;
	int cols;
	char ch='I';

	printf("Enter the no of rows\n");
	scanf("%d",&row);
	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=1; i<=row; i++){
		
		for(int j=1; j<=cols; j++){
			printf("%c ",ch);
			ch--;

		}
		printf("\n");
	}
}
