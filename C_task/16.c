#include <stdio.h>
#include <conio.h>
#include <locale.h>


char strncpy(char * su, char * ty, int x)
{
	for (int i = 0; i < x; i++)
	{
		su[i] = ty[i];
	}
}

char strncat(char * su, char * ty, int x)
{
	int count = 0;
	for (int i = 0; i < 50; i++)
	{
		if (su[i] != '\0') count++;
		else break;
	}
	for (int i = 0; i < x; i++)
	{
		su[i + count] = ty[i];
	}

}

int strncmp(char * su, char * ty, int x)
{
	for (int i = 0; i < x; i++)
	{
		if (su[i] != ty[i]) return 0;
	}
	return 1;
}

int main()
{
	setlocale(0, "russian");
	int x ;
	char ty[100], su[50];
	for (int n = 0; n < 100; n++)
	{
		ty[n] = '\0';
	}
	for (int n = 0; n < 50; n++)
	{
		su[n] = '\0';
	}
	printf("Введите вашу строку: ");
	gets(ty);
	printf("Введите количество символов n: ");
	scanf("%i", &x);
	strncpy(su, ty, x);
	printf("Ваша строка c количеством символов n: %s\n", su);
	strncat(su, ty, x);
	printf("Строка из предыдущего действия с добавлением n символов к концу строки: %s\n", su);
	printf("Строка из предыдущего действия с добавлением n символов к концу строки и исходная строка равны (если 1, то равны): %i", strncmp(su, ty, x));
	_getch();
	return 0;
}
