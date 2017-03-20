#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(0, "russian");
	
	int count = 0, i = 0, index = 0;

	char shish[100], shosh[100];
	for (int n = 0; n < 100; n++)
	{
		shish[n] = '\0';
	}
	for (int n = 0; n < 100; n++)
	{
		shosh[n] = '\0';
	}
	printf("Введите вашу строку: ");
	gets(shosh);
	
	while (i < 100)
	{
		if (shosh[i + 1] == shosh[i] && shosh[i+1] != '\0')
		{
			for (int j = i ; j < 100; j++)
			{
				if (shosh[j] != shosh[j + 1])
				{
					break;
				}
				else count++;
			}
			i = i + count;
			
		}
		else
		{	
			shish[index] = shosh[i];
			index++;
		}
		i++;
		count = 0;
	}

	printf("Ваша строчка в новом виде: %s", shish);
	_getch();
	return 0;
}
