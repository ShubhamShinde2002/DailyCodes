//wap to print all even no in reverse order and odd no in standard way.Both separately.within a range.
#include<stdio.h>
void main(){
	int x;
	int y;

	printf("enter the start no and end no\n ");
	scanf("%d%d",&x,&y);
	for(int i=y; i>=x; i--){
		if(i%2==0){
			printf("%d\t",i);
		}
		
	}printf("\n");
	for(int i=x; i<=y; i++){
		if(i%2!=0){
			printf("%d\t",i);
		}
	}
}
