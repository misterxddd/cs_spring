#include <stdio.h>
#include <conio.h>
#include <locale.h>



void fib(int n,int a,int b)
{
	if (n == 0) return;
	printf("%i ", b);
	int acc = b;
	b += a;
	a = acc;
	n--;
	fib(n, a, b);
}

int main()
{
	setlocale(0, "russian");
	int N = 0;
	printf("Введите натуральное число N: ");
	scanf("%i", &N);
	if (N <= 0)
		printf("Ошибочка!");
	fib(N, 0, 1);
	_getch();
	return 0;
}
