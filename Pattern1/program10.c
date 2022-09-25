//D4 C3 B2 A1
//D4 C3 B2 A1
//D4 C3 B2 A1
//D4 C3 B2 A1

#include<stdio.h>
void main(){
	int row;
	int x;
	char ch;

	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		x=4;
		ch='D';
		for(int j=1; j<=row; j++){
			printf("%c%d ",ch,x);
			x--;
			ch--;

		}
		
		printf("\n");
	
	}
}
