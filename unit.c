#include<stdio.h>
int main()
{
	int unit;
	float energy;
	float surcharge;
	printf("unit consumed:");
	scanf("%d",&unit);
	if(0<unit && unit < 100)
	{
	energy = unit* 0.60 + 50;
	printf("Energy consumed:%0.2f",energy);
	}
	else if (100<unit && unit<200)
	{
	energy = unit* 0.80 +50;
	printf("Energy consumed:%0.2f",energy);
	}
	else  
	{
	energy=unit*0.90 + 50;
	printf("Energy consumed:%0.2f",energy);
	}
	 if (energy >300)
	 {
	surcharge= energy + energy*0.15;
		printf("\nAmount :%f",surcharge);
	 }
	return 0;
}
