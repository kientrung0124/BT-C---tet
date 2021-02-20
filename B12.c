#include<stdio.h>

typedef struct
{
	int row;
	int col;
	int data[10][10]; 
}Matrix;

void nhap(Matrix *mt)
{
	printf("\nNhap so hang: ");
	scanf_s("%d", &mt->row);
	printf("\nNhap so cot: ");
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
}

void KT(Matrix *mt1, Matrix *mt2, Matrix *mt3, char pheptinh)
{
	switch (pheptinh)
	{
		case '+':
			mt3->row = mt1->row;
			mt3->col = mt1->col;
			for (int i = 0; i < mt1->row; i++)
			{
				for (int j = 0; j < mt1->col; j++)
				{
					mt3->data[i][j] = mt1->data[i][j] + mt2->data[i][j];
				}
			}
		break; 
		case '-':
			mt3->row = mt1->row;
			mt3->col = mt1->col;
			for (int i = 0; i < mt1->row; i++)
			{
				for (int j = 0; j < mt1->col; j++)
				{
					mt3->data[i][j] = mt1->data[i][j] - mt2->data[i][j];
				}
			}
			break;
		case '*':
			mt3->row = mt1->row;
			mt3->col = mt2->col;
			for (int i = 1; i <= mt1->row; i++)
			{
				for (int j = 1; j < mt2->col; j++)
				{
					int sum = 0;
					for (int r = 1; r <= mt1->col; r++)
					{
						sum += mt1->data[i][r] * mt2->data[r][j];
					}
					mt3->data[i][j] = sum;
				}
			}
			break;
	default:
		printf("Math error\n");
	}
	
}

int main()
{
	Matrix mt1, mt2,mt3;
	char pheptinh;
	printf("\nMa tran 1: ");
	nhap(&mt1);
	printf("\nMa tran 2: ");
	nhap(&mt2);
	fflush(stdin);
	getchar();
	printf("Nhap phep tinh: ");
	scanf_s("%c", &pheptinh);
	xuat(mt1);
	xuat(mt2);
	if ((mt1.row == mt2.row && mt1.col == mt2.col) && (pheptinh == '+' || pheptinh == '-'))
	{
		KT(&mt1, &mt2, &mt3, pheptinh);
		xuat(mt3);
	}
	if ((mt1.col == mt2.row) && (pheptinh == '*'))
	{
		KT(&mt1, &mt2, &mt3, pheptinh);
		xuat(mt3);
	}
	return 0;
}