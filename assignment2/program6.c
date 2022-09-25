//(WHILE LOOP) wap to take input from user and count the no of digits
#include<stdio.h>
void main(){
	int x;
	int count;

	printf("Enter no:\n");
	scanf("%d",&x);

	while(x>0){
		x=x/10;

		count++;

	
	}
	
	printf("%d",count);

}
