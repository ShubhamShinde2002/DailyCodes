#include<stdio.h>
void main(){
	int x;
	int sum=0;
	printf("Enter the no.:\n");
	scanf("%d",&x);
	for(int i=0; i<=x; i++){
		if(i%3!=0){
			sum=sum+i;
			
		}
		
	}

	printf("%d is the sum",sum);
}
