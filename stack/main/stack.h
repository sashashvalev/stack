
struct Elem
{
	int num;
	Elem *prev;
};

void Push(int num, Elem **top);

int Pop(Elem **top);

void Output(Elem*);