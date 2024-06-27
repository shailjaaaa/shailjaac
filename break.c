#include <stdio.h>
int number;
char name[50];
void getdata()
{
    printf("Enter the number:");
    scanf("%d", &number);
    printf("Enter the name:");
    scanf("%s", &name);
}
int main()
{
    int n;
    do
    {
        printf("1.getdata\n");
        printf("1.printdata\n");
        printf("select number:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            getdata();
            break;
        case 2:
            printf("Select 2:");
            break;
        default:
            printf("Number not match");
        }
    } while (n == 3);

    return 0;
}