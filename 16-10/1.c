//WAP TO CREATE 1D,2D AND 3D ARRAY AND PRINT THEM USING POINTERS

#include<stdio.h>
void main(){

	int size;

	printf("Enter size of array\n");
	scanf("%d",&size);

	int ele[size];
	printf("Enter array elements:\n");

	for(int i=0; i<size; i++){

		scanf("%d\n",ele[i]);
	}
}
