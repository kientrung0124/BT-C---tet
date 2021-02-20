#include<stdio.h>

int main()
{
	int a[4] = { 10,5,2,1 };
	int totien, sotien, count = 0;
	scanf_s("%d",&sotien);
	for (int i = 0; i < 4; i++)
	{
		totien = sotien / a[i];
		count++;
		sotien = sotien % a[i];
	}
	printf("%d", count);

	return 0;
}
