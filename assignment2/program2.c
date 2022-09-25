#include<stdio.h>
void main(){
	int x;
	int sum=11;
	printf("Enter the no:\n");
	scanf("%d",&x);

	for(int i=1; i<=10; i++){
		if(x!=0){
			printf("%d+%d==%d\n",i,x,sum);
		}
		x--;
	}

}
