#include<stdio.h>

typedef struct
{
	int row;
	int col;
	int data[10][10];
}Matrix;

void nhap(Matrix *mt)
{
	scanf_s("%d", &mt->row);
	scanf_s("%d", &mt->col);
	for (int i = 0; i < mt->row; i++)
	{
		for (int j = 0; j < mt->col; j++)
		{
			scanf_s("%d", &mt->data[i][j]);
		}
	}
}

void xuat(Matrix mt)
{
	for (int i = 0; i < mt.row; i++)
	{
		printf("\n");
		for (int j = 0; j < mt.col; j++)
		{
			printf("%d ", mt.data[i][j]);
		}
	}
	printf("\n");
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void KT(Matrix* mt)
{
	int max, min;
	max = min = mt->row;
	if (mt->row < mt->col) max = mt->col;
	else min = mt->col;
	for (int i = 0; i < min; i++)
	{
		for (int j = i; j < max; j++)
		{
			{
				swap(&mt->data[i][j], &mt->data[j][i]);
			}
		}
	}
	for (int i = 0; i < mt->col; i++)
	{
		printf("\n");
		for (int j = 0; j < mt->row; j++)
		{
			printf("%d ", mt->data[i][j]);
		}
	}
}

int main()
{
	Matrix mt;
	nhap(&mt);
	xuat(mt);
	KT(&mt);
	return 0;
}