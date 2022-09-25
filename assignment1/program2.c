#include<stdio.h>
void main(){
	int x,y,z;

	printf("Enter the numbers\n");
	scanf("%d%d%d",&x,&y,&z);

	if(x>y && x>z){
		printf("The max value is %d\n",x);

	}else if(y>x && y>z){

		printf("The max value is %d\n",y);


	}else if(z>x && z>y){

		printf("The max value is %d\n",z);
	}else{

		printf("The no are same");
	}
}
