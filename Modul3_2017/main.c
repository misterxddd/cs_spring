#include <stdio.h>
#include "array.h"
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(0, "russian");

	int index, len, count, z, ind, boom, del, value, sort;
	char lol[100], c, x, olo[100], hud;
	
	CreateStr:
	printf("Введите Ваш массив типа char: ");
	gets(lol);
	string * str = CreateString(lol);

	printf("\nПрограмма разбита на несколько блоков (Блок1, Блок2, Блок3). В каждом блоке программа выполняет по 3-5 функции из задания.\n");
	GT:
	printf("Если вы хотите использовать какой-нибудь блок, на пишите '1', '2' или '3'.\nДля выхода из программы напишите '0'.\n");
	printf("Для создания нового массива напишите '4'.\n");
	scanf("%i", &value);

	if (value == 1)
	{
		printf("\nРазмер Вашего массива: %i\n", Lenght(str));
		len = Lenght(str);

		printf("Введите i-ый индекс элемента: ");
		scanf("%i", &index);
		printf("Элемент по индексу: %c\n", GetByIndex(str, index));

		printf("Введите i-ый индекс элемента и сам элемент (вводите через пробел): ");
		scanf("%i %c", &count, &c);
		SetByIndex(str, c, count);
		printf("Ваш массив в новом виде:");
		PrintString(str);
		printf("\n");
		goto GT;
	}

	else if (value == 2)
	{
		printf("\nВведите элемент для добавления его в конец массива: ");
		clearerr(stdin);
		fseek(stdin, 0, SEEK_SET);
		scanf("%c", &hud);
		AddToTheEnd(str, hud);
		printf("Массив, с вашим элементов в конце: ");
		PrintString(str);

		printf("Введите i-ый индекс элемента и сам элемент, чтобы добавить его после i-ого: ");
		scanf("%i %c", &z, &x);
		AddNewItem(str, z, x);
		printf("Массив после добавления нового элемента: ");
		PrintString(str);

		printf("Введите индекс i-ого элемента для того, чтобы его удалить: ");
		scanf("%i", &ind);
		DeleteItem(str, ind);
		printf("Элемент удален: ");
		PrintString(str);
		printf("\n");
		goto GT;
	}

	else if (value == 3)
	{
		printf("\nНапишите '1' для удаления последнего элемента массива или '0' и ваш массив останется в прежней форме: ");
		clearerr(stdin);
		fseek(stdin, 0, SEEK_SET);
		scanf("%i", &boom);
		if (boom == 1)
		{
			DeleteLast(str);
			printf("Последний элемент Вашего массива был удален: ");
			PrintString(str);
		}
		else
			printf("Последний элемент не был удален\n");

		printf("Введите Новый массив типа char: ");
		clearerr(stdin);
		fseek(stdin, 0, SEEK_SET);
		gets(olo);
		string * str1 = CreateString(olo);
		Sex(str, str1);
		printf("Два массива объединены: ");
		PrintString(str);

		printf("Отсортировать массив, руководствуюясь тфблицей ASCII? ('1' - Да, '0' - Нет): ");
		scanf("%i", &sort);
		Sort(str, &function);
		printf("Ваша строка отсортирована: ");
		PrintString(str);

		printf("Хотите удалить весь массив? (Нажмите '1', если хотите) ");
		scanf("%i", &del);
		if (del == 1)
			DeleteAll(str);
		goto GT;
	}

	else if (value == 4)
	{
		free(str);
		goto CreateStr;
	}

	else if (value == 0)
		return 0;

	else
	{
		printf("Неккоректный ввод");
		goto GT;
	}
	
	return 0;
}
