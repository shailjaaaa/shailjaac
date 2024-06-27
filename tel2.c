#include <stdio.h>
void perfect()
{
    int i, n;
    int sum = 0;
    printf("Enter value:");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
            printf("%d\n", i);
        }
    }

    if (sum == n)
    {
        printf("Perfect number");
    }
    else
    {
        printf("not perfect number");
    }
}
int main()
{
    perfect();
    return 0;
}