#include<stdio.h>

int main()
{
	int n, a[100];
	scanf_s("%d", &n);
	float sum = 0, avr = 1;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
		sum += a[i];
	}
	avr = sum / n;
	printf("\nsum = %f", sum);
	printf("\navr = %f", avr);
	return 0;
}