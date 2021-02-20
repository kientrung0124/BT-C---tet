#include<stdio.h>
#include<math.h>

int factorial(int n)
{
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

float KT(int x, int y)
{
	if (x == 1) return y;
	return pow(y, x) / factorial(x) + KT(x - 1, y);
}

int main()
{
	int x, y;
	float ans = 0;
	scanf_s("%d%d", &x, &y);
	ans = KT(x, y) + 1;
	printf("%f", ans);
	return 0;
}