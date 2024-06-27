#include <stdio.h>
int maths, phy, chem, total;
float per;
void student()
{

    printf("Maths marks:");
    scanf("%d", &maths);
    printf("Physics marks:");
    scanf("%d", &phy);
    printf("Chem marks:");
    scanf("%d", &chem);
    total = maths + phy + chem;
}
void totaal()
{
    student();

    per = total / 3.00;
    printf("Total marks:%d", total);
    printf("\nPercentage:%f\n", per);
}
void grade()
{
    totaal();
    if (80 <= per && per < 100)
    {
        printf("Grade A");
    }
    else if (60 <= per && per < 80)
    {
        printf("Grade b");
    }
    else if (40 <= per && per < 60)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }
}
int main()
{
    grade();

    return 0;
}