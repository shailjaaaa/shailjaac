#include <stdio.h>
struct Bill
{
    int rate, qty, amt;
    float dis, billamt, gst, netbill;
};
int main()
{
    struct Bill st[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\nRate of item:");
        scanf("%d", &st[i].rate);
        printf("Quantity:");
        scanf("%d", &st[i].qty);
        st[i].amt = st[i].rate * st[i].qty;
        st[i].dis = st[i].amt * 0.05;
        st[i].billamt = st[i].amt - st[i].dis;
        st[i].gst = st[i].billamt * 0.18;
        st[i].netbill = st[i].gst + st[i].billamt;

        printf("rate\tqty\tamt\tdis\tbillamt\tgst\tnetbill");
        printf("\n%d\t%d\t%d\t%0.2f\t%0.2f\t%0.2f\t%0.2f", st[i].rate, st[i].qty, st[i].amt, st[i].dis, st[i].billamt, st[i].gst, st[i].netbill);
    }
    return 0;
}