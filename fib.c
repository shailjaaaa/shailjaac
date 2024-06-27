#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", fibonacci(i));
    }
    return 0;
}