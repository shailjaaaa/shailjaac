#include<stdio.h>
#include<conio.h>
int main ()
{
int rate ;
int qty ;
int amt;
float dis;
float billamt ;
float gst ;
float netbill;
printf("Rate of item:");
scanf("%d",& rate);
printf("Quantity is:");
scanf("%d",& qty);
amt = rate * qty ;
dis = amt * 0.05;
billamt = amt - dis ;
gst= billamt *0.18;
netbill = gst + billamt;
printf("rate\tqty\tamt\tdis\tbillamt\tgst\tnetbill");
printf("\n%d\t%d\t%d\t%0.2f\t%0.2f\t%0.2f\t%0.2f",rate,qty,amt,dis,billamt,gst,netbill);


return 0 ;
}
