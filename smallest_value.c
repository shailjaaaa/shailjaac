#include<stdio.h>
int main ()
{ 
	int a ;
	int b ;
	
	printf("Number is b:");
	scanf("%d",&b);
	printf("Number is a:");
	scanf("%d",&a);
		if (a<b){
			printf("a is %d",a);
		} else {
			printf("b is %d",b);
		}
		return 0 ;
}