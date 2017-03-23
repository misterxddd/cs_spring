#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(0, "russian");
	char shosh[255], key[100];
	int i;
	FILE*kek;
	FILE*lol;
	int fsize = 0, dsize = 0;
	char * buffer;
	char * dog;
	for (i = 0; i < 255; i++)
		shosh[i] = '\0';
	for (i = 0; i < 100; i++)
		key[i] = '\0';
	printf("Введите ваш ключ: ");
	gets(key);
	printf("Введите путь к вашему файлу (Например: C:/Papka/file.xls): ");
	gets(shosh);
	for (i = 0; ;i++)
	{
		if (key[i] == '\0') break;
		dsize++;
	}
	kek = fopen(shosh, "rb");
	fseek(kek, 0, SEEK_END);
	fsize = ftell(kek);
	rewind(kek);
	buffer = (char *)malloc(fsize);
	fread(buffer, 1, fsize, kek);
	fclose(kek);
	int index = 0;
	for (i = 0; i < fsize; i++)
	{
		if (index == dsize) index = 0;
		buffer[i] ^= key[index];
		index++;
	}
	lol = fopen(shosh, "w");

	fwrite(buffer, 1, fsize, lol);
	
	fclose(lol);
	free(buffer);
	printf("Теперь ваш файл зашифрован/расшифрован! Чтобы его расшифровать/зашифровать используйте свой ключ еще раз хД\n");
	return 0;
}
