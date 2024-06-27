#include <stdio.h>
int main()
{
    FILE *ptr;
    char string[50];
    // ptr = fopen("goto.c", "a");
    // gets(string);
    // fprintf(ptr, "%s", string);

    ptr = fopen("goto.c", "r");
    while (fscanf(ptr, "%s", string) != EOF)
    {
        printf("%s", string);
    }
    return 0;
}