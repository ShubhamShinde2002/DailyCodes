/*= = = = = =
 *$ $ $ $ $ $
  @ @ @ @ @ @ 
  = = = = = =
  $ $ $ $ $ $
  @ @ @ @ @ @*/

#include<stdio.h>
void main(){
	int rows;
	int cols;


        printf("Enter the no of rows\n");	
        scanf("%d",&rows);

	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=0; i<rows; i++){

		for(int j=0; j<cols; j++){
			if(i%3==0){
				printf("= ");


			}else if(i%3==1){
				printf("$ ");
			}else{
				printf("@ ");

			}
			
		}
		printf("\n");

	}
}
