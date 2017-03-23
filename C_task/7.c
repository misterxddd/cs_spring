#include <stdio.h>


int main()
{
	float z, a, b, d;
	char c;
	int i;
	scanf("%f%c%f", &a, &c, &b);
	switch (c)
	{
		case '+':
			d = a + b;
			break;
		case '-':
			d = a - b;
			break;
		case '*':
			d = a * b;
			break;
		case '/':
			if (b == 0)
			{
				printf("Error");
			}
			else
			{
				d = a / b;
			}
			break;
		case '^':
			z = a;
			if (b != 0)
			{
				for ( i = 1; i < b; i++)
				{
					a *= z;
				}
				d = a;
				break;
			}
			else
				d = 1;
			break;
		case '%':
			d = 0.01*a*b;
	}
	printf("%f\n\n", d);
	return 0;
}
