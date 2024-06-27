#include <stdio.h>
int main()
{ 
    int i,n;
    
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    printf("Enter the element of [%d]:",i);
    scanf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("%d\t",arr[i]);
    }

    return 0;
}