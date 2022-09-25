/*D4 C3 B2 A1
 *A1 B2 C3 D4
  D4 C3 B2 A1
  A1 B2 C3 D4*/

#include<stdio.h>
void main(){
	int row;
	int cols;
	int x;
	char ch;


	printf("Enter the no of rows\n");
	scanf("%d",&row);
	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=1; i<=row; i++){
		ch='A';
		x=1;
		for(int j=1; j<=cols; j++){
			if(i%2==0){
				printf("%c%d ",ch,x);
				ch++;
				x++;
			}else{
				printf("%c%d ",ch+3,x+3);
				ch--;
				x--;
				
			}

		
		}
	/*	for(int k=1;k<=cols; k++){
			if(i%2==0){
				printf("%d ",x);
				x++;
			}else{
				printf("%d ",x+3);
				x--;
			}
		}*/
		printf("\n");
	}
}
