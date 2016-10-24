// stack.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "stack.h"
using namespace std;


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
}