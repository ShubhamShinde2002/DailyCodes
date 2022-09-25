#include<stdio.h>
void main(){
	int iarr[5];
	int sum=0;
	printf("Enter Array element\n");
	for(int i=0; i<5; i++){
		scanf("%d",&iarr[i]);
	}
	for(int i=0; i<5; i++){
		
		printf("%d\n",iarr[i]);
		sum=sum+iarr[i];
		
	}
	printf("%d ",sum);
}
