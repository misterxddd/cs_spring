#include <stdio.h
#include <locale.h>

unsigned int rightrot(unsigned int x,unsigned int n)
{
	for(unsigned int i = 0; i < n; i++) 
		__asm ror x, 1
	return x;
}

int main()
{
	setlocale(0, "russian");
	unsigned int x, n;
	printf("Введите значение x и количество разрядов n: ");
	scanf("%u %u", &x, &n);
	x = rightrot(x, n);
	printf("%u", x);
	return 0;
}
