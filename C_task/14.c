#include <stdio.h>
#include <locale.h>


char * reverse(char * chern)
{
	int i;
	char * hex = (char *)malloc(100);
	for (i = 0; i < 100; i++)
	{
		hex[i] = '\0';
	}
	int index = 0;
	for (i = 99; i > -1;i--)
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
	int sas = 0;
	int i;
	syrs:
	for (i = 0; i < 100; i++)
	{
		faceless_void[i] = '\0';
	}
	printf("Введите вашу строку на английском языке: ");
	gets(faceless_void);
	shosh = reverse(faceless_void);

	printf("Ваша строка, но наоборот: %s\n", shosh);
	goto syrs;
}
