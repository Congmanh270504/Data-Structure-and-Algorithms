#ifndef LinkList_h
#define LinkList_h
#include<stdio.h>
#include<conio.h>

struct SNode
{
	int data;
	SNode* Node;
};
struct SList
{
	SNode* head = NULL;
	SNode* tail = NULL;
};
void fixScanf();
void menu();
SNode* createSNode(int x);
void getLinkList(SNode* n);
void insertHead(SList& sl, SNode* p);
void insertTail(SList& sl, SNode* p);
void insertAfter(SList& sl, SNode* q, SNode* p);
SNode* findSNode(SList& sl, int x);


#endif // !1