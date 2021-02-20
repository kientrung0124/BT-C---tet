#include<stdio.h>

int main()
{
	int n, a[100];
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int swap = a[i];
				a[i] = a[j];
				a[j] = swap;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}