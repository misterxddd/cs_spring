#include <stdio.h>

#define swap(t, x, y) {t=y; y=x; x=t;}

int main()
{
	int a, b, c;
	printf("x = ");
	scanf("%i", &a);
	printf("y = ");
	scanf("%i", &b);
	swap(c, a, b);
	printf("\n%i, %i\n", a, b);

	return 0;
}
