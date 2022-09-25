/*1 2 9 4
 *25 6 49 8
 81 10 121 12
 169 14 225 16*/

#include<stdio.h>
void main(){
	int row;
	int x=1;

	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		
		for(int j=1; j<=row; j++){
			if(j%2==0){
				printf("%d ",x);
				x++;
			}else{
				printf("%d ",x*x);
				x++;
			}

		}
		
		printf("\n");
	
	}
}
