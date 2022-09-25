//1 4 27
//4 27 16
//27 16 125

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the number of rows\n");
	scanf("%d",&rows);
	for(int i=0; i<rows; i++){
		int x=1+i;
		for(int j=0; j<rows; j++){
			if(i%2!=0){
				if(j%2!=0){
					printf("%d ",x*x*x);
				}else{
					printf("%d ",x*x);
				}
			}else{
				if(j%2!=0){
					printf("%d ",x*x);

				}else{
					printf("%d ",x*x*x);
				}
			}
			x++;
		}
		printf("\n");
	}



}
