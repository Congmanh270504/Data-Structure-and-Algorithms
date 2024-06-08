#include "AStack.h"
void fixScanf()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void menuAStack()
{

	printf("%s============================= %sMenu%s ==============================\n", YELLOW, CYAN, YELLOW);
	printf("|| %s************************** %sInit %s****************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 1.Create random Array Stack                             *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sInsert%s **************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 2.Push                                                  *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 3.Pop                                                   *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 4.Get Top                                               *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sOutput%s **************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 5.Show Array Stack                                      *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 0.Exit                                                  *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sEnd%s *****************************%s||\n", WHITE, GREEN, WHITE, YELLOW);
	printf("=================================================================%s\n", RESET);
}
void initAStack(AStack& as)
{
	as.top = -1;
}
void createRandom(AStack& as)
{
	itemType tmp;
	srand((unsigned)time(NULL));
	initAStack(as);
	int n = rand() % 10 + 1;
	for (int i = 0; i < n; i++)
	{
		tmp = rand() % 100;
		as.data[i] = tmp;
	}
	as.top = as.data[n - 1];
}
int isEmty(AStack& as)
{
	if (as.top == -1)
	{
		return 1;
	}
	return 0;
}
int isFull(AStack& as)
{
	if (as.top > MAX_SIZE)
	{
		return 1;
	}
	return 0;
}
int push(AStack& as, itemType x, itemType& n)
{
	if (isFull(as))
	{
		printf("Full list!!");
		return 0;
	}
	as.data[n] = x;
	as.top = as.data[n];
	n++;
	return 1;
}
int pop(AStack& as, itemType &n)
{
	int x;
	if (isEmty(as))
	{
		printf("Emty list!!");
		return 0;
	}
	x = as.top;
	n--;
	return x;
}
int getTop(AStack& as)
{
	if (isEmty(as))
	{
		printf("Emty list!!");
		return 0;
	}
	return as.top;
}
void Output(AStack& as, int n)
{
	printf("Array Stack: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", as.data[i]);
	}
	printf("\n");
}