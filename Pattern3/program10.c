//D1 C2 R3 A4
//e5 f4 g3 h2
//F3 E4 D5 C6
//g7 h6 i5 j4	

#include<stdio.h>
void main(){
	int rows;
	int a;
	printf("Enter the number of rows\n");
	scanf("%d",&rows);
	for(int i=1; i<=rows; i++){
		int ch=63+rows+i;
		int x=i;
		for(int j=1; j<=rows; j++){
			if(i%2!=0){
				printf("%c%d ",ch,x);
				ch--;
				x++;
				a=x;
			}else{
				printf("%c%d ",ch+32,a);
				ch++;
				a--;
			}
		}
		printf("\n");
	}



}
