#include<stdio.h>

typedef struct
{
	float real;
	float image;
}Complex;

void Nhap_so_phuc(Complex* sp)
{
	printf("Nhap phan thuc: ");
	scanf_s("%f", &sp->real);
	printf("Nhap phan ao: ");
	scanf_s("%f", &sp->image);
}


Complex KT(Complex* sp1, Complex* sp2, Complex* sp3, char pheptinh)
{
	switch (pheptinh)
	{
	case '+':
		sp3->real = sp1->real + sp2->real;
		sp3->image = sp1->image + sp2->image;
		break;
	case '-':
		sp3->real = sp1->real - sp2->real;
		sp3->image = sp1->image - sp2->image;
		break;
	case '*':
		sp3->real = sp1->real * sp2->real - sp1->image * sp2->image;
		sp3->image = sp1->real * sp2->real + sp1->image * sp2->image;
		break;
	default:
		printf("\nMath error");
	}
	return *sp3;
}

void Xuat(Complex sp)
{
	printf("\Ket qua phep toan: %f + %fi", sp.real, sp.image);
}

int main()
{
	char pheptinh;
	Complex sp1, sp2, sp3;
	Nhap_so_phuc(&sp1);
	Nhap_so_phuc(&sp2);
	fflush(stdin);
	getchar();
	printf("Phep tinh(+.-,*): ");
	scanf_s("%c", &pheptinh);
	KT(&sp1, &sp2, &sp3, pheptinh);
	Xuat(sp3);
	return 0;
}


