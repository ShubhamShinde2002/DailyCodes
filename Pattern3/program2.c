/*3 b 1 d
 *a 2 c 0
  3 b 1 d
  a 2 c 0*/

#include<stdio.h>
void main(){
	int x=3;
	char ch='b';
	int rows;
	int cols;


        printf("Enter the no of rows\n");	
        scanf("%d",&rows);

	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=0; i<rows; i++){

		for(int j=0; j<cols; j++){
			if(x%2==0 || ch%2==1){
				printf("%c%d ",ch,x);


			}else{
				printf("%d%c ",x,ch);
			}
			printf("\n");
		}
		printf("\n");

	}
}
