#include<stdio.h>
void main(){
	int x,y;
	printf("Enter value\n");
	scanf("%d%d",&x,&y);
	fun(x,y);
}
void fun(int x,int y){
	printf("%d\n",x+y);
}
