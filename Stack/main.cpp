#include "AStack/AStack.h"
#include "Stack/Stack.h"
int mainAS()
{
	AStack as;
	int n = 0, x = -1;
	int choose = 0;
	menuAStack();
	initAStack(as);
	do
	{
		printf("%sChoose excercise u want: ", PURPLE);
		if (!scanf("%d", &choose))
			choose = -1;
		printf("%s", RESET);
		fixScanf();
		switch (choose)
		{
		case 1:
			printf("Get lenght of Array Stack: ");
			scanf("%d", &n);
			createRandom(as);
			Output(as, n);
			break;
		case 2:
			printf("Push number x: ");
			scanf("%d", &x);
			push(as, x, n);
			Output(as, n);
			break;
		case 3:
			x = pop(as, n);
			printf("Pop value: %d\n", x);
			Output(as, n);
			break;
		case 4:
			x = getTop(as);
			printf("Get top value: %d\n", x);
			break;
		case 5:
			Output(as, n);
			break;
		case 0:
			printf("%s\tHave a nice day sir!!%s\n", GREEN, RESET);
			return 0;
		default:
			printf("Don't have that choose!!\n");
			break;
		}
	} while (choose != 0);
}
int mainStack()
{
	Stack s;
	int result = 0, x;
	int choose = 0;
	NStack* p;
	menuStack();
	do
	{
		printf("%sChoose excercise u want: ", PURPLE);
		if (!scanf("%d", &choose))
			choose = -1;
		printf("%s", RESET);
		fixScanf();
		switch (choose)
		{
		case 1:
			createRandom(s);
			Output(s);
			break;
		case 2:
			printf("Push number x: ");
			scanf("%d", &x);
			p = createNStack(x);
			push(s, p);
			Output(s);
			break;
		case 3:
			x = pop(s);
			printf("Pop value: %d\n", x);
			Output(s);
			break;
		case 4:
			x = getTop(s);
			printf("Get top value: %d\n", x);
			break;
		case 5:
			Output(s);
			break;
		case 0:
			printf("%s\tHave a nice day sir!!%s\n", GREEN, RESET);
			break;
			return 0;
		default:
			printf("Don't have that choose!!\n");
			break;
		}
	} while (choose != 0);
}
void main()
{
	mainAS();
	//mainStack();
	getch();
}
