#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void endcoder(int n, char s[100])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ') continue;
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = (s[i] - 'A' + n) % 26 + 'A';
			}
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = (s[i] - 'a' + n) % 26 + 'a';
			}
			if (s[i] >= 0 && s[i] <= 9)
			{
				s[i] = (s[i] + n) % 10;
			}
		}
	}
	printf("Chuoi da duoc ma hoa: %s",s);
}

void decoder(int n, char s[100])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ') continue;
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = (s[i] - 'A' - n) % 26 + 'A';
			}
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = (s[i] - 'a' - n) % 26 + 'a';
			}
			if (s[i] >= 0 && s[i] <= 9)
			{
				s[i] = (s[i] - n) % 10;
			}
		}
	}
	printf("Chuoi da duoc ma hoa: %s", s);
}

int main()
{
	int n;
	char s[70];
	printf("Nhap n: ");
	scanf_s("%d", &n);
	while (getchar() != '\n') {};
	printf("Nhap chuoi: ");
	gets(s);
	endcoder(n, s);
	decoder(n, s);
	return 0;
}