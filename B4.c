#include<stdio.h>

int main()
{
	int a[100];
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i]) max = a[i];
	}
	int min = a[0]; 
	for (int i = 0; i < n; i++)
	{
		if (min > a[i]) min = a[i];
	}
	printf("\nmax = %d",max);
	printf("\nmax = %d",min);
	return 0;
}