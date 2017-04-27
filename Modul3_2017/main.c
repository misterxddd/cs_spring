#include <stdio.h>
#include "array.h"
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(0, "russian");

	int index, len, count, z, ind, boom, del, value, sort;
	char lol[100], ball, x, olo[100], hud;
	
	CreateStr:
	printf("Введите Ваш массив типа char: ");
	gets(lol);
	string * str = CreateString(lol);

	GT:
	printf("\nВыберите действие, которое хотите совершить:\n");
	printf("Для получения размера массива напишите '1'.\n");
	printf("Для получения элемента по индексу напишите '2'.\n");
	printf("Для того, чтобы задать i-й элемент напишите '3'.\n");
	printf("Для добавления нового элемента в конец массива напишите '4'.\n");
	printf("Для добавления нового элемента после i-го напишите '5'.\n");
	printf("Для удаления i-го элемента напишите '6'.\n");
	printf("Для удаления последнего элемента напишите '7'.\n");
	printf("Для сортировки массива с помощью таблицы ASCII напишите '8'.\n");
	printf("Если вы хотите слить два массива напишите '9'.\n");
	printf("Для очистки списка напишите '10'.\n");
	printf("Для создания нового массива напишите '11'.\n");
	printf("Для выхода из программы напишите '0'.\n");
	scanf("%i", &value);


	switch (value)
	{
	case a:
		printf("\nРазмер Вашего массива: %i\n", Lenght(str));
		len = Lenght(str);
		break;

	case b:
		printf("Введите i-ый индекс элемента: ");
		scanf("%i", &index);
		printf("Элемент по индексу: %c\n", GetByIndex(str, index));
		break;

	case c:
		printf("Введите i-ый индекс элемента и сам элемент (вводите через пробел): ");
		scanf("%i %c", &count, &ball);
		SetByIndex(str, ball, count);
		printf("Ваш массив в новом виде:");
		PrintString(str);
		printf("\n");
		break;

	case d:
		printf("\nВведите элемент для добавления его в конец массива: ");
		clearerr(stdin);
		fseek(stdin, 0, SEEK_SET);
		scanf("%c", &hud);
		AddToTheEnd(str, hud);
		printf("Массив, с вашим элементов в конце: ");
		PrintString(str);
		break;

	case e:
		printf("Введите i-ый индекс элемента и сам элемент, чтобы добавить его после i-ого: ");
		scanf("%i %c", &z, &x);
		AddNewItem(str, z, x);
		printf("Массив после добавления нового элемента: ");
		PrintString(str);
		break;

	case f:
		printf("Введите индекс i-ого элемента для того, чтобы его удалить: ");
		scanf("%i", &ind);
		if (ind == 1)
			str = str->next;
		else DeleteItem(str, ind);
		printf("Элемент удален: ");
		PrintString(str);
		printf("\n");
		break;

	case g:
		DeleteLast(str);
		printf("Последний элемент Вашего массива был удален: ");
		PrintString(str);
		break;

	case h:
		Sort(str, &function);
		printf("Ваша строка отсортирована: ");
		PrintString(str);
		break;

	case i:
		printf("Введите Новый массив типа char: ");
		clearerr(stdin);
		fseek(stdin, 0, SEEK_SET);
		gets(olo);
		string * str1 = CreateString(olo);
		Sex(str, str1);
		printf("Два массива объединены: ");
		PrintString(str);
		break;

	case j:
		DeleteAll(str, len);
		break;

	case new:
		free(str);
		goto CreateStr;
		break;

	case end:
		return 0;
		break;

	default:
		printf("Неккоректный ввод");
		break;

	}
	goto GT;
	return 0;
}
