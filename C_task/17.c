#include <stdio.h>
#include <locale.h>


double binom(double * mas, int a)
{
	double d, z;
	int i;
	d = mas[0];
	for (i = 0; i < a; i++)
	{
		if (d < mas[i])
			d = mas[i];
	}
	z = mas[0];
	for (i = 0; i < a; i++)
	{
		if (z > mas[i])
			z = mas[i];
	}
	return d - z;
}

int main()
{
	setlocale(0, "russian");
	int a, i;
	double d;
	printf("Введите количество символов в массиве: ");
	scanf("%i", &a);
	double * mas = (double *)malloc(a*8);
	printf("Введите свой массив: ");
	for (i = 0; i < a; i++)
		scanf("%lf", &mas[i]);
	d = binom(mas, a);
	printf("Разность между наибольшим и наименьшим значениями: %lf\n", d);
	free(mas);
	return 0;
}
