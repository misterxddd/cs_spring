#include <stdio.h>

int main()
{
	char mogy[100];
	int per = 0;

	gets(mogy);
	for (int i = 0; i < 100; i++)
	{
		if ( (mogy[i] == ' ') || (mogy[i] == '\0') )
		{
			for (int c = 0; c < per; c++)
				printf("-");
			printf("\n");
			for (int c = 0; c < per - 1; c++)
				printf(" ");
			printf("|\n");
			for (int c = 0; c < per; c++)
				printf("-");
			printf("\n");
			per = 0;
		}
		else
			per++;
		if (mogy[i] == '\0')
			break;
	}
	return 0;
}
