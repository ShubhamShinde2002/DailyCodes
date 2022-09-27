//1] WAP to make an array of the table of Given Number

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no\n");
	scanf("%d",&num);
	int y;
	int arr[10];
	for(int i=0; i<10; i++){
		y=num(i+1);
		arr[i]=y;
	}for(int i=0; i<10; i++){
		printf("%d ",*(arr[i]+1));
	}
}
