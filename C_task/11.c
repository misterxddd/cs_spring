#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(0, "russian");
	char shosh[32];
	printf("Введите число в двоичном виде: ");
	fgets(shosh, 32, stdin);
	char * pos;
	long int dvach;
	dvach = strtol(shosh, &pos, 2);

	printf("Ваше число в десятичной форме записи: %ld\n", dvach);
	return 0;
}
