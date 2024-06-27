#include <stdio.h>
int main()
{
	int i, n;
	int t1, t2;
	t1 = 1;
	t2 = 1;
	int t3;
	t3 = t1 + t2;

	printf("Number of terms are:");
	scanf("%d", &n);
	printf("%d\n%d\n", t1, t2);
	for (i = 3; i <= n; i++)
	{
		printf("%d\n", t3);
		t1 = t2;
		t2 = t3;
		t3 = t1 + t2;
	}
	return 0;
}