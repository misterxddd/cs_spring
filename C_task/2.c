#include <stdio.h>

int main()
{
	int day = 7, month = 12;
	int a = day;
	printf("0%i.%i\n", day, month);
	day = month;
	month = a;
	printf("%i.0%i\n", day, month);
	return 0;
}
