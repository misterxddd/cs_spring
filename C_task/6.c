#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "russian");
	int a;
	printf("Введите натуральное число: ");
	scanf("%i", &a);
	if (a == 0)
	{
		printf("Факториал числа: 1");
		return 0;
	}
	else if (a < 0)
	{
		printf("Ошибка!!!");
		return 0;
	}
	else
	{
		int b = 1;
		while (a >= 1)
		{
			b *= a;
			a--;
		}
		printf("Факториал числа: %i\n", b);
	}
	return 0;
}
