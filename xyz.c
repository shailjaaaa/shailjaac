#include<stdio.h>
int main()
{
	int i,j;
	int z=11;
	for(i=1;i<=5;i++){
	for(j=1;j<=5;j++){
	printf("%d\t",z);
	z++;
	}
	z+=5;	
	printf("\n");
	}
	return 0;
	}   
	