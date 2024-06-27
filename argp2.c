#include <stdio.h>
void pattern()
{
    int i, j;
    int k = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (k % 2 == 1)
            {
                printf("1\t");
            }
            else
            {
                printf("0\t");
            }
            k++;
        }
        printf("\n");
    }
}
int main()
{
    pattern();
    return 0;
}