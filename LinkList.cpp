#include"LinkList.h"
void fixScanf()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void menu()
{

	printf("%s============================= %sMenu%s ==============================\n", YELLOW, CYAN, YELLOW);
	printf("|| %s************************** %sInit %s****************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 1.Create Linked List                                    *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 2.Create random Linked List                             *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sFormat%s **************************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 3.Insert Head                                           *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 4.Insert Tail                                           *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 5.Insert node p after q                                 *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 6.Find node x                                           *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sWriteFile%s ***********************%s||\n", WHITE, RED, WHITE, YELLOW);
	printf("|| %s* 10.Show Link list                                       *%s ||\n", WHITE, YELLOW);
	printf("|| %s* 0.Exit                                                  *%s ||\n", WHITE, YELLOW);
	printf("|| %s************************** %sEnd%s *****************************%s||\n", WHITE, GREEN, WHITE, YELLOW);
	printf("=================================================================%s\n", RESET);
}
SNode* createSNode(int x)
{
	SNode* p = new SNode;
	if (p == NULL)
	{
		printf("Full memory!!");
		return NULL;
	}
	p->data = x;
	p->Node = NULL;
	return p;
}
void create(SList& sl, int n)
{
	int i = 0, x;

	while (i < n)
	{
		if (isEmty(sl))
		{
			printf("Get data node %d: ", i);
			scanf("%d", &x);
			SNode* p = createSNode(x);
			insertHead(sl, p);
		}
		else
		{
			printf("Get data node %d: ", i);
			scanf("%d", &x);
			SNode* p = createSNode(x);
			insertTail(sl, p);
		}
		i++;
	}
}
void createRandom(SList& sl, int n)
{
	int i = 0, x;
	srand((unsigned)time(NULL));
	while (i < n)
	{
		if (isEmty(sl))
		{
			x = -20 + rand() % 120;
			SNode* p = createSNode(x);
			insertHead(sl, p);
		}
		else
		{
			x = -20 + rand() % 120;
			SNode* p = createSNode(x);
			insertTail(sl, p);
		}
		i++;
	}
}
void output(SNode*& n)
{
	while (n != NULL)
	{
		printf("%d -> ", n->data);
		n = n->Node;
	}
	printf("NULL\n");
}
int isEmty(SList& sl)
{
	if (sl.head == NULL)
	{
		return 1;
	}
	return 0;
}
void insertHead(SList& sl, SNode* p)
{
	if (p == NULL)
	{
		printf("Full memory!!");
	}
	if (isEmty(sl))
	{
		sl.head = p;
		sl.tail = p;
	}
	else
	{
		p->Node = sl.head;
		sl.head = p;
	}
}

void insertTail(SList& sl, SNode* p)
{
	if (p == NULL)
	{
		printf("Full memory!!");
	}
	if (isEmty(sl))
	{
		sl.head = p;
		sl.tail = p;
	}
	else
	{
		sl.tail->Node = p;
		sl.tail = p;
	}
}
void insertAfter(SList& sl, SNode* q, SNode* p)
{
	if (p == NULL || q == NULL)
	{
		printf("Full memory!!");
	}
	p->Node = q->Node;
	q->Node = p;
	if (sl.tail == q)
	{
		insertTail(sl, p);
	}
}
SNode* findSNode(SList& sl, int x)
{
	if (isEmty(sl))
	{
		return NULL;
	}
	SNode* p = sl.head;
	while (p != NULL && p->data != x)
	{
		p = p->Node;
	}
	return p;
}