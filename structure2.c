#include <stdio.h>
struct Students
{
    int st[3];
    int sub[5];
    int total;
    float per;
    int roll;
};
int main()
{
    struct Students st[3];
    for (int i = 0; i < 3; i++)
    {
        st[i].total = 0;
        st[i].per = 0.0;

        printf("Enter roll no:");
        scanf("%d", &st[i].roll);

        for (int j = 0; j < 5; j++)
        {
            printf("Enter sub marks:");
            scanf("%d", &st[i].sub[j]);
            st[i].total += st[i].sub[j];
            st[i].per = st[i].total / 5.0;
        }
        printf("Total marks:%d", st[i].total);
        printf("\nPercentage:%f\n", st[i].per);
    }
    return 0;
}