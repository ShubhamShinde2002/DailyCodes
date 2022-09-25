//wap to print the divisor and count of divisor of entered no.
#include<stdio.h>
void main(){
	int x;
	int count=0;
	int sum=0;

	printf("Enter the no:\n");
	scanf("%d",&x);

	for(int i=1; i<=x; i++){
		if(x%i==0){
			printf("%d is divisor\n",i);
			count=count+1;
			sum=sum+i;
		}
		
		
	}

		printf("%d is the count of divisor\n",count);

		printf("%d is the sum of divisor\n",sum);

}
