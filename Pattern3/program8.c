//16 15 14 13
//L K J I
//8 7 6 5
//D C B A	

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the number of rows\n");
	scanf("%d",&rows);
	int x;
	x=rows*rows;
	for(int i=0; i<rows; i++){
		for(int j=0; j<rows; j++){
			if(i%2==0){
					printf("%d ",x);
			}else{
					printf("%c ",64+x);
			}
			x--;
		}
		printf("\n");
	}



}
