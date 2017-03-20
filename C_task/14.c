#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

#define bara char
#define viper int

char * reverse(char * chern)
{
	char * hex = (char *)malloc(100);
	for (int i = 0; i < 100; i++)
	{
		hex[i] = '\0';
	}
	int index = 0;
	for (int i = 99; i > -1;i--)
	{
		if (chern[i] != '\0')
		{
			hex[index] = chern[i];
			index++;
		}
	}
	return hex;
}

main()
{
	setlocale(0, "russian");
	char faceless_void[100];
	char * shosh;
	viper sas = 0;
	syrs:
	for (int i = 0; i < 100; i++)
	{
		faceless_void[i] = '\0';
	}
	printf("Введите вашу строку на английском языке: ");
	gets(faceless_void);
	shosh = reverse(faceless_void);
	/*srand(time(0));
	for (int i = 0;i < 10000;i++)
	{
		sas = rand() % 500000;
		Beep(sas, 100);
	}*/
	printf("Ваша строка, но наоборот: %s\n", shosh);
	_getch();
	goto syrs;
}
