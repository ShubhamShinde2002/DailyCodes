#include<stdio.h>
void main(){
	int x;

	printf("Enter the number\n");
	scanf("%d",&x);
	for(int i=0; i<=x; i++){
		if(x%i==0){
			
			printf("%d ",i);
		}
	}
}
