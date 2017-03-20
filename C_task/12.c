#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(0, "russian");
	char syrs[100];
	printf("Введите строчку на буржуйском языке:");
	scanf("%s99", syrs);
	char c = syrs[0];
	for (int i = 0; i < 100; i++)
	{
		if (c < syrs[i])
		{
			c = syrs[i];
		}
	}
	printf("Наибольший ASCII код у символа %c", c);

	_getch();
	return 0;
}
