#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(0, "russian");
	float a, b, c, D, x1, x2;
	printf("Введите коэффициенты квадратного уравнения: ");
	scanf("%f %f %f", &a, &b, &c);
	D = b*b - 4 * a * c;
	if (D > 0)
	{
		x1 = (-b + sqrt(D)) / 2 * a;
		x2 = (-b - sqrt(D)) / 2 * a;
		printf("x1 = %f\nx2 = %f", x1, x2);
	}
	else if (D == 0)
	{
		x1 = x2 = -b / 2 * a;
		printf("x1 = x2 = %f", x1);
	}
	else
	{
		printf("Вещественных корней нет!!!");
	}
	_getch();
	return 0;
}
