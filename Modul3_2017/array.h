#pragma once

typedef struct pop
{
	char symbol; 
	struct pop * next;
}string;

string * CreateString(char * str);
string * CreateStringStruct(char _symbol, string * _next);
void PrintString(string * _string);

int Lenght(string * _string);
char GetByIndex(string * _string, int _index);
void SetByIndex(string * _string, char _symbol, int _index);
void AddToTheEnd(string * _string, char _symbol);
void AddNewItem(string * _string, int _index, char _symbol);
void DeleteItem(string * _string, int _index);
void DeleteLast(string * _string);
void DeleteAll(string * _string, int _lenght);
void Sort(string * _string, void(*function)(char*, char*));
void Sex(string * _string1, string * _string2);

void function(char * _symbol1, char * _symbol2);
