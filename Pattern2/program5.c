/*D C B A
 *e d c b
 F E D C
 g f e d*/

#include<stdio.h>
void main(){
	int row;
	int cols;
	char ch;

	printf("Enter the no of rows\n");
	scanf("%d",&row);
	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=1; i<=row; i++){
		ch=63+row+i;
		
		for(int j=1; j<=cols; j++){
			if(i%2==0){
				printf("%c ",ch+32);
				ch--;
			}else{
				printf("%c ",ch);
				ch--;
			}

		}
		printf("\n");
	}
}
