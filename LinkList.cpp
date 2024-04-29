#include"LinkList.h"
void fixScanf()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void menu()
{
	printf("=============================Menu================================\n");
	printf("|| **************************Init***************************** ||\n");
	printf("|| * 1.Show Link list                                        * ||\n");
	printf("|| **************************Format*************************** ||\n");
	printf("|| * 2.Insert Head                                           * ||\n");
	printf("|| * 3.Insert Tail                                           * ||\n");
	printf("|| * 4.Insert node p after q                                 * ||\n");
	printf("|| * 5.Find node x                                           * ||\n");
	printf("|| **************************WriteFile************************ ||\n");
	printf("|| * 0.Exit                                                  * ||\n");
	printf("|| ***************************End***************************** ||\n");
	printf("=================================================================\n");
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
void getLinkList(SNode* n)
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