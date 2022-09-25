//wap to take a number as input and print whether that is a prime no or not 
#include<stdio.h>
void main(){
	int x;
	int count=0;

	printf("Enter the no.:\n");
	scanf("%d",&x);

	for(int i=1; i<=x; i++){
		if(x%i==0){
			count++;

		}
	}
	if(count==2){
		printf("%d is prime no\n",x);

	}else if(count==1){
		printf("%d is neither composite nor prime\n",x);
	}else{
		printf("%d is a composite no\n",x);
	}


}
