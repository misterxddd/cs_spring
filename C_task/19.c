#include <stdio.h>
#include <conio.h>
#include <locale.h>

#define bool int
#define true 1
#define false 0


int main()
{
	setlocale(0, "russian");
	bool checker1 = true;
	FILE * shosh;
	FILE * kek;
	char fif[255];
	for (int i = 0; i < 255; i++)
		fif[i] = '\0';
	printf("Введите путь к вашему файлу (Например: C:/Papka/file.txt): ");
	gets(fif);
	if (fif == NULL)
		printf("Dаш файл пустой)");
	shosh = fopen(fif, "rb");
	int fsize = 0, counter = 0, f = 0, index = 0;
	char * buffer;
	char * dog;

	fseek(shosh, 0, SEEK_END);
	fsize = ftell(shosh);
	rewind(shosh);
	buffer = (char *)malloc(fsize);
	fread(buffer, 1, fsize, shosh);
	fclose(shosh);
	f = fsize;
	dog = (char*)malloc(fsize);
	for (int i = 0; i < fsize; i++)
	{
		if (buffer[i] == '"') checker1 = !checker1;
		if (buffer[i] == '/' && buffer[i+1] == '/' && checker1)
		{
			counter += 2;
			for (int j = i + 2; j < fsize;j++)
			{
				if (buffer[j] == 0x0d && buffer[j + 1] == 0x0a)
				{
					f -= counter;
					break;
				}
				counter++;
			}
			counter--;
			i += counter;
			counter = 0;
		}
		else if (buffer[i] == '/' && buffer[i + 1] == '*' && checker1)
		{
			counter += 2;
			for (int j = i + 2; j < fsize; j++)
			{
				if (buffer[j] == '*' && buffer[j + 1] == '/')
				{
					counter += 2;
					f -= counter;
					break;
				}
				counter++;
			}
			counter--;
			i += counter;
			counter = 0;
		}
		else
		{
			dog[index] = buffer[i];
			index++;
		}
	}
	
	kek = fopen(fif, "w");
	fwrite(dog, 1, f, kek);
	fclose(kek);
	free(buffer);
	printf("Ваш файл был изменен!\n");
	_getch();
	return 0;
}
