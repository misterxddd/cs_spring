#include <stdio.h>
#include <math.h>

float mainFunction(float x) {
	float function;
	function = x*x; //This is our function
	return function;
}

int main()
{
	
	float h, x, a, b;
	float D = 0;
	float D1 = 0;
	float D2 = 0;

	unsigned char signs;
	scanf("%c", &signs);
	char string[] = "%.xf\n";
	string[2] = signs;

	printf("Your integral limits: ");
	scanf("%f %f", &a, &b);
	printf("Your step: ");
	scanf("%f", &h);
	x = a;
	D1 = (1 / (2 * h))*((-3) * mainFunction(x) + 4 * (mainFunction(x + h)) - (mainFunction(x + 2 * h)));
	D2 = (1 / (2 * h))*(-mainFunction(x) + mainFunction(x + 2 * h));
	printf(string, D1);
	printf(string, D2);
	while (x + 2 * h <= b) {
		D = (1 / (2 * h))*(mainFunction(x) - 4 * (mainFunction(x + h)) + 3 * (mainFunction(x + 2 * h)));
		x = x + h;
		printf(string, D);
	}
	return 0;
}
