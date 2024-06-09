#include "AQueue.h"
void fixScanf()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void menuAQueue()
{

	printf("%s============================= %sMenu%s ==============================\n", YELLOW, CYAN, YELLOW);
	printf("|| %s************************** %sInit %s****************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 1.Create random Array Queue                             *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sInsert%s **************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 2.Insert Queue                                          *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 3.Delete Queue                                          *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 4.Get Head                                              *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 5.Get Tail                                              *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sOutput%s **************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 6.Show Array Queue                                      *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 0.Exit                                                  *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sEnd%s *****************************%s||\n", WHITE, GREEN, WHITE, YELLOW);
	printf("=================================================================%s\n", RESET);
}
void createRandom(AQueue& aq, itemType n)
{
	int tmp = 0, i;
	for (i = 0; i < n; i++)
	{
		tmp = rand() % 121 - 20;
		aq.data[i] = tmp;
		aq.tail = i;
	}
	aq.head = 0;
}
void Output(AQueue& aq)
{
	for (int i = 0; i < aq.n; i++)
	{
		printf("%d ", aq.data[i]);
	}
	printf("\n");
}
void initQueue(AQueue& aq)
{
	aq.n = 0;
	aq.head = aq.tail = -1;
}
int isEmty(AQueue& aq)
{
	if (aq.n == 0)
	{
		return 1;
	}
	return 0;
}
int isFull(AQueue& aq)
{
	if (aq.n >= MAX_SIZE)
	{
		return 1;
	}
	return 0;
}
int insertAQueue(AQueue& aq, itemType x)
{
	if (isFull(aq))
	{
		printf("Array Queue is Full!!");
		return 0;
	}
	if (isEmty(aq))
	{
		aq.head = aq.tail = x;
		return 1;
	}
	aq.data[aq.tail + 1] = x;
	aq.tail++;
	aq.n++;
}
int deleteQeueu(AQueue& aq)
{
	int x = aq.data[aq.head];

	for (int i = 0; i < aq.n; i++)
	{
		aq.data[i] = aq.data[i + 1];
	}
	aq.tail--;
	aq.head = 0;
	aq.n--;
	return x;
}
int getHead(AQueue& aq)
{
	if (isEmty(aq))
	{
		printf("Emty Array Queue!!\n");
		return 0;
	}
	return aq.data[aq.head];
}
int getTail(AQueue& aq)
{
	if (isEmty(aq))
	{
		printf("Emty Array Queue!!\n");
		return 0;
	}
	return aq.data[aq.tail];
}