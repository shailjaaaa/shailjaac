#include<stdio.h>
int main()
{
   int arr[5]={'H','E','L','L','O'};
   char i,j;
   for(i=0;i<5;i++)
   {
    for(j=0;j<=i;j++)
    {
        
        printf("%c\t",arr[j]);
    }
    printf("\n");
   }
    
    return 0;
}