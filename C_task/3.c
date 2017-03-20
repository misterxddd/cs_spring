#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(0, "russian");
	float a, b, y, z, d, k;
	printf("Введите значения сопротивлений в виде a+bi y+zi: ");
	scanf("%f+%fi %f+%fi", &a, &b, &y, &z);
	d = (a*a*y + a*y*y + a*z*z + b*b*y) / ((a + y)*(a + y) + (b + z)*(b + z));
	k = (a*a*z + b*b*z + b*y*y + b*z*z) / ((a + y)*(a + y) + (b + z)*(b + z));
	printf("Ответ: %.4f+%.4fi", d, k);
	_getch();
	return 0;
}
