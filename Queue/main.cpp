#include "AQueue/AQueue.h"
#include"Queue/Queue.h"

int mainAQueue()
{
	AQueue aq;
	int result = 0;
	int choose = 0, x;
	menuAQueue();
	initQueue(aq);
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
			aq.n = rand() % 10 + 1;
			createRandom(aq, aq.n);
			Output(aq);
			break;
		case 2:
			x = rand() % 100 + 1;
			insertAQueue(aq, x);
			Output(aq);
			break;
		case 3:
			result = deleteQeueu(aq);
			printf("Pop queue: %d\n", result);
			break;
		case 4:
			result = getHead(aq);
			printf("Get top value: %d\n", result);
			break;
		case 5:
			result = getTail(aq);
			printf("Get tail value: %d\n", result);
			break;
		case 6:
			Output(aq);
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

int main()
{
	mainAQueue();
	getch();
}
