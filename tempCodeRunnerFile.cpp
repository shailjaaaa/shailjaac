#include<stdio.h>
// void interest(int p, int r, int t)
// {
//     float i;
//     i=p*r*t/100;
//     printf("Simple interest:%0.2f",i);
// }
float interest1(int p, int r, int t)
    float interest3=0.0;
    interest3=p*r*t/100;
    return interest3;
{

}

int main()
{
    // interest(1000,2,2);
    float interest3=0.0;
    interest3=interest1(10000,2,2);
    printf("Simple interest is:%f",interest3);
    return 0;
}