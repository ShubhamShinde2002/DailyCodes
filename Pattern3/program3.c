/*4 a 3 b*/
/*4 a 3 b*/
/*4 a 3 b*/
/*4 a 3 b*/
#include<stdio.h>
void main(){
	int x;
	char ch;
	int rows;
	int cols;


        printf("Enter the no of rows\n");	
        scanf("%d",&rows);

	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=0; i<rows; i++){
		x=4;
		ch='a';

		for(int j=0; j<cols; j++){
			if(j%2==0){
				
		         	printf("%d ",x);
			        x--;
			}else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");

	}
}
