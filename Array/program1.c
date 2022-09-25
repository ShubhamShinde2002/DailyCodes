#include<stdio.h>
void main(){
	float package1,package2,package3,package4;
	float sum;

	printf("Enter the package of friends\n");
	scanf("%f%f%f%f",&package1,&package2,&package3,&package4);

	sum = package1+package2+package3+package4;

	printf("%f",sum);
}
