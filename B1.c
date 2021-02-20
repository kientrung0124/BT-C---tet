#include<stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		printf("\n");
		for (int j = 0; j <= 2*n; j++)
		{
			if (j == n - i)
			{
				while (j <= n + i)
				{
					printf("#");
					j++;
				}
			}
			else printf(" ");
		}
	}
	return 0;
}