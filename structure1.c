#include <stdio.h.>
struct Students
{
    int age;
    char name[50];
};
int main()
{
    struct Students st[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the age:");
        scanf("%d", &st[i].age);
        printf("Enter the name:");
        scanf("%s", &st[i].name);

        printf("%d\n", st[i].age);
        printf("%s\n", st[i].name);
    }
    return 0;
}
