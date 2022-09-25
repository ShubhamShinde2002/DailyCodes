#include<stdio.h>
void main(){
	int x,y,z;

	printf("Enter the values:\n");
	scanf("%d%d%d",&x,&y,&z);

	if(x<y && x<z){

		printf("The min value is %d",x);
	}else if(y<x && y<z){

		printf("The min value is %d",y);
	}else if(z<x && z<y){

		printf("The min value is %d",z);
	}else{

		printf("The numbers are same");
	}
		
		
}
