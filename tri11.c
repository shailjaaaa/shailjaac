#include<stdio.h>
int main()
{
	char i,j;
	int k=1;
	for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
		if(k%2==1)
		{
		printf("1");	
		}else{
	      printf("0");
	    }
		k++;
	}
	printf("\n");
}
return 0;
}