/*A B C D
 *B C D E
  C D E F
  D E F G*/

#include<stdio.h>
void main(){
	int row;
	char ch='A';
	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(int i=0; i<=row; i++){
		ch='A'+i;
		for(int j=0; j<=row; j++){
			printf("%c ",ch);
			ch++;

		}
		
		printf("\n");
	
	}
}
