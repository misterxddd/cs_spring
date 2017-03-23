#include <stdio.h>
#include <locale.h>


main(int argc, char * argv[] )
{
	setlocale(0, "russian");
	if (argc != 3)
	{
		printf("До свидания!");
			exit(1);
	}
	FILE *syrs;
	FILE *sors;
	long fsize;
	char * buffer;
	syrs = fopen(argv[1], "rb");
	if (syrs == NULL)
	{
		printf("До свидания!");
		exit(1);
	}
	fseek(syrs, 0, SEEK_END);
	fsize = ftell(syrs);
	rewind(syrs);

	buffer = (char *)malloc(fsize);
	fread(buffer, 1, fsize, syrs);
	sors = fopen(argv[2], "wb");
	
	fwrite(buffer, 1, fsize, sors);

	fclose(sors);
	fclose(syrs);
	free(buffer);
	return 0;
}
