// main.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "stack.h"
using namespace std;

/* Define struck element
struct Elem
{
	int num;
	Elem *prev;
};

void Push(int num, Elem **top);

int Pop(Elem **top);

void Output(Elem*);/**/


int _tmain(int argc, _TCHAR* argv[])
{
	Elem * top(NULL);
	for (int i = 0; i < 10; i++)
	{
		Push(i, &top);
	}
	//	Output(top);
	for (int i = 0; i < 10; i++)
	{
		cout << Pop(&top);
	}
	_getch();
	return 0;
}

/*
void Push(int num, Elem **top)
{
	Elem * curr = new Elem;
	curr->num = num;	// (*curr).num = num;
	if (*top == NULL)
	{
		curr->prev = NULL;
	}
	else
	{
		curr->prev = *top;
	}
	*top = curr;
}

//
int Pop(Elem **top)
{
	if (*top == NULL)
	{
		return -1;
	}
	int tmp = (*top)->num;
	Elem * tmp_top = *top;
	*top = (**top).prev;
	delete tmp_top;
	return tmp;
}

//
void Output(Elem *top)
{
	while (top)	// top != NULL
	{
		cout << top->num;
		top = top->prev;
	}
}/**/