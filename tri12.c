#include<stdio.h>
int main()
{
	int i,j;
	char z='A';
	for(i=0;i<5;i++){
		z='A'+i;
	for(j=i;j>=0;j--){
	printf("%c\t",z--);}
	printf("\n");
	}
	}