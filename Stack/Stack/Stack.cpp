#include "Stack.h"
void menuStack()
{

	printf("%s============================= %sMenu%s ==============================\n", YELLOW, CYAN, YELLOW);
	printf("|| %s************************** %sInit %s****************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 1.Create random Stack                                   *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sInsert%s **************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 2.Push                                                  *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 3.Pop                                                   *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 4.Get Top                                               *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sOutput%s **************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 5.Show Stack                                            *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 0.Exit                                                  *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sEnd%s *****************************%s||\n", WHITE, GREEN, WHITE, YELLOW);
	printf("=================================================================%s\n", RESET);
}
NStack* createNStack(int x)
{
	NStack* p = new NStack;
	if (p == NULL)
	{
		printf("Full memory!!");
		return NULL;
	}
	p->data = x;
	p->next = NULL;
	return p;
}
int isEmty(Stack& s)
{
	if (s.Top == NULL)
	{
		return 1;
	}
	return 0;
}
void createRandom(Stack& s) {
	srand((unsigned)time(NULL));
	int n = rand() % 10 + 1;
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		tmp = rand() / 121 - 20;
		NStack* p = createNStack(tmp);
		push(s, p);
		s.Top = p;
	}
}
int push(Stack& s, NStack* p)
{
	if (p == NULL)
	{
		printf("Full memory!!");
		return 0;
	}
	if (isEmty(s))
	{
		s.Top = p;
	}
	else
	{
		p->next = s.Top;
		s.Top = p;
	}
	return 1;
}
int pop(Stack& s)
{
	int x = 0;
	if (isEmty(s))
	{
		printf("Stack is emty!!");
		return 0;
	}
	NStack* p = s.Top;
	s.Top = s.Top->next;
	x = p->data;
	delete p;
	return x;
}
int getTop(Stack& s)
{
	if (isEmty(s))
	{
		printf("Stack is emty!!");
		return 0;
	}
	return s.Top->data;
}
void Output(Stack& s) {
	if (isEmty(s))
	{
		printf("Stack is emty!!");
		return;
	}
	NStack* i = s.Top;
	while (i != NULL)
	{
		printf("%d -> ", i->data);
		i = i->next;
	}
	printf("NULL\n");
	delete i;
}