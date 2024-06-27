#include <stdio.h>
int main()
{
    char c;
    int upcase, lowcase;
    printf("Alphabet :");
    scanf("%c", &c);
    lowcase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upcase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (upcase || lowcase)
    {
        printf("Alphabet is vowel");
    }
    else
    {
        printf("Alphabet is consonant");
    }

    return 0;
}