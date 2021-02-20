#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, delta, x1, x2;
	printf("Nhap vao 3 so a, b, c: ");
	scanf_s("%f%f%f", &a, &b, &c);
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("Phuong trinh vo so nghiem");
			}
			else {
				printf("Phuong trinh vo nghiem");
			}
		}
		else {
			printf("Phuong trinh co nghiem duy nhat: %f", -c / b);
		}
	}
	else {
		delta = b * b - 4 * a * c;
		if (delta > 0) {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("Nghiem thu nhat x1 = %f", x1);
			printf("Nghiem thu nhat x2 = %f", x2);
		}
		else if (delta == 0) {
			printf("Phuong trinh co nghiem kep: x1 = x2 = %f ", -b / 2 * a);
		}
		else {
			printf("Phuong trinh vo nghiem");
		}
	}
	return 0;
}