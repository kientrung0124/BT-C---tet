#include<stdio.h>
#include<stdlib.h>

int main()
{
	char s[100];
	fgets(s, sizeof(s), stdin);
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 2 || s[i] == ' ') continue;
		else
		{
			char c = 1;
			for (int j = i + 1; s[j] != '\0'; j++)
			{
				if (s[i] == s[j])
				{
					c++;
					s[j] = 2;
				}
			}
			printf("%d%c ", c, s[i]);
		}
	}
	int k = 1;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == ' ') && (s[i+1] != ' ')) k++;
	}
	printf("\n%d", k);
	return 0;
}