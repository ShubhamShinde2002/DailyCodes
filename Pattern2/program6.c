/* = = = =
 * $ $ $ $
 * = = = = 
 * $ $ $ $*/

#include<stdio.h>
void main(){
	int row;
	int cols;


	printf("Enter the no of rows\n");
	scanf("%d",&row);
	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=1; i<=row; i++){
		
		for(int j=1; j<=cols; j++){
			if(i%2==0){
				printf("$ ");
			}else{
				printf("= ");
				
			}

		}
		printf("\n");
	}
}
