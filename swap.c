#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    printf("Value of a:%d\n",a);
    printf("Value of b:%d\n",b);
    int *c;
    int *d;
    c=&a;
    d=&b;
    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;

    printf("Value of a:%d\n",*c);
    printf("Value of b:%d",* d);
    

    return 0;
}