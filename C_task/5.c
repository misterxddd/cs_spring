#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "russian");
	float C, F, t1, t2, m;
	printf("Укажите диапозон в формате t1-t2 и шаг m: ");
	scanf("%f-%f %f", &t1, &t2, &m);
	C = t1;
	do
	{
		F = (1.8*C) + 32;
		printf("%f\t %f\n", C, F);
		C = C + m;
	} while (C <= t2);

		
	return 0;
}
