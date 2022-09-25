/*1 4 3
 *16 5 36
  7 64 9*/

#include<stdio.h>
void main(){
	int x=1;
	int rows;
	int cols;


        printf("Enter the no of rows\n");	
        scanf("%d",&rows);

	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=0; i<rows; i++){

		for(int j=0; j<cols; j++){
			if(x%2==0){
				printf("%d ",x*x);
				
			}else{
				printf("%d ",x);

			}
			x++;
		}
		printf("\n");

	}
}
