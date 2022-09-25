/*   1   2   3   4
 *  25  36  49  64
 *   9  10  11  12
 * 169 196 225 256*/

#include<stdio.h>
void main(){
	int row;
	int cols;
	int x=1;


	printf("Enter the no of rows\n");
	scanf("%d",&row);
	printf("Enter the no of cols\n");
	scanf("%d",&cols);

	for(int i=1; i<=row; i++){
		
		for(int j=1; j<=cols; j++){
			if(i%2==0){
				printf("%d ",x*x);
				x++;
			}else{
				printf("%d ",x);
				x++;
				
			}

		}
		printf("\n");
	}
}
