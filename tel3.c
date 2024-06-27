#include <stdio.h>
void coin()
{
    int amt;
    int coin20 = 0, coin10 = 0, coin5 = 0, coin2 = 0, coin1 = 0;
    printf("Enter the amount:");
    scanf("%d", &amt); 
    if (amt >= 38)
    {
        coin20++;
        coin10++;
        coin5++;
        coin2++;
        coin1++;
        amt -= 38;
    }
    if (amt >= 20)
    {
        coin20++;
        amt -= 20;
    }
    if (amt >= 10)
    {
        coin10++;
        amt -= 10;
    }
    if (amt >= 5)
    {
        coin5++;
        amt -= 5;
    }
    if (amt >= 2)
    {
        coin2++;
        amt -= 2;
    }
    if (amt >= 1)
    {
        coin1++;
        amt -= 1;
    }
    printf("coin of 20:%d", coin20);
    printf("\ncoin of 10:%d", coin10);
    printf("\ncoin of 5:%d", coin5);
    printf("\ncoin of 2:%d", coin2);
    printf("\ncoin of 1:%d", coin1);
}
int main()
{
    coin();

    return 0;
}