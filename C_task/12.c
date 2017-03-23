#include <stdio.h> 
#include <locale.h> 

int main() 
{ 
	int i; 
	setlocale(0, "russian"); 
	char syrs[100]; 
	for (i = 0; i< 100; i++) 
		syrs[i] = '\0'; 
	printf("Введите строчку на буржуйском языке:"); 
	gets(syrs); 
	char c; 
	c = syrs[0]; 
	for (i = 0; i < 100; i++) 
	{ 
		if (c < syrs[i]) 
		{ 
			c = syrs[i]; 
		} 
	} 
	printf("Наибольший ASCII код у символа %c\n", c); 

	return 0; 
}
