#include <stdio.h>
#include "array.h"
#include <string.h>


string * CreateString(char * str)
{
	int size = 0;
	int index = 0;
	size = strlen(str);
	if (size == 0)
		return CreateStringStruct(0, NULL);
	string * root = CreateStringStruct(str[0], NULL);
	string * copyRoot = root;
	index++;
	while (index != size)
	{
		root->next = CreateStringStruct(str[index], NULL);
		root = root->next;
		index++;
	}
	return copyRoot;
}

string * CreateStringStruct(char symbol, string * next)
{
	string * root = (string *)malloc(sizeof(string));
	root->symbol = symbol;
	root->next = NULL;
	return root;
}

void PrintString(string * str)
{
	while (str)
	{
		printf("%c", str->symbol);
		str = str->next;
	}
	printf("\n");
}

int Lenght(string * str)
{
	int count = 0;
	while (str)
	{
		count++;
		str = str->next;
	}
	return count;
}

char GetByIndex(string * str, int index)
{
	int count = 1;
	while (str)
	{
		if (count == index)
			return str->symbol;
		count++;
		str = str->next;
	}

}

void SetByIndex(string * str, char symbol, int index)
{
	int count = 1;
	while (str)
	{
		if (count == index)
		{
			str->symbol = symbol;
			return;
		}
		count++;
		str = str->next;
	}

}

void AddToTheEnd(string * str, char symbol)
{
	string * acc = NULL;
	while (str)
	{
		acc = str;
		str = str->next;
	}
	acc->next = CreateStringStruct(symbol, NULL);
}


void AddNewItem(string * str, int index, char symbol)
{
	string * acc = CreateStringStruct(symbol, NULL);
	string * acc1;
	int count = 1;
	while (str)
	{
		if (count == index)
		{
			acc1 = str->next;
			break;
		}
		count++;
		str = str->next;
	}
	str->next = acc;
	acc->next = acc1;
}


void DeleteItem(string * str, int index)
{
	int count = 1;
	string * acc = NULL;
	string * acc1 = NULL;
	string * acc2 = NULL;
	string * acc3 = str;
	while (str)
	{
		if (count == index)
		{
			acc = str->next;
			acc2 = str;
			count = 0;
			break;
		}
		count++;
		str = str->next;
	}
	while (acc3)
	{
		if (count == (index - 2))
		{
			acc1 = acc3;
			break;
		}
		count++;
		acc3 = acc3->next;
	}
	acc1->next = acc;
	free(acc2);
}


void DeleteLast(string * str)
{
	string * acc = NULL;
	string * acc1 = str;
	while (str)
	{
		acc = str;
		str = str->next;
	}
	while (acc1)
	{
		if (acc1->next == acc)
		{
			acc1->next = NULL;
			break;
		}
		acc1 = acc1->next;
	}

	free(acc);
}


void DeleteAll(string * str)
{
	int len = Lenght(str);
	string * acc = NULL;
	string * acc1 = NULL;
	acc = str;
	int i = 0;
	while (len != 1)
	{
		acc = str;
		for (int i = 0; i < len - 1; i++)
		{
			acc1 = acc;
			acc = acc->next;
		}
		acc1->next = NULL;
		free(acc);
		len--;
	}
	free(str);
	printf("Ваша строчка пуста\n");
}


void Sex(string * str, string * str1)
{
	string * acc = NULL;
	while (str)
	{
		acc = str;
		str = str->next;
	}
	acc->next = str1;

}


void function(char * symbol1, char * symbol2)
{
	char sym = *symbol1;
	if (*symbol1 < *symbol2)
	{
		*symbol1 = *symbol2;
		*symbol2 = sym;
	}
}


void Sort(string * str, void(*function)(char*, char*))
{
	string * acc = NULL;
	string * copystr = str;
	int i = 0;
	int j = 0;
	int length = Lenght(str);
	for (i = 0; i < length; i++)
	{
		str = copystr;
		while (str->next)
		{
			acc = str;
			str = str->next;
			function(acc, str);
		}
	}
}
