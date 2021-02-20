#include<stdio.h>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

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
		int min = i;
		for(int j=i+1;j<n;j++)
		{		
			if (a[min]>a[j])
			{
				min = j;
			}		
		}
		swap(&a[min], &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}