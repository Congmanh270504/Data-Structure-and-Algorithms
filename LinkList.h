#ifndef LinkList_h
#define LinkList_h
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define RESET          "\x1b[0m"

#define BLACK        "\x1b[30m"
#define RED          "\x1b[31m"
#define GREEN        "\x1b[32m"
#define YELLOW       "\x1b[33m"
#define BLUE         "\x1b[34m"
#define PURPLE      "\x1b[35m"
#define CYAN         "\x1b[36m"
#define WHITE        "\x1b[37m"

#define BACKGROUND_BLACK   "\x1b[40m"
#define BACKGROUND_RED     "\x1b[41m"
#define BACKGROUND_GREEN   "\x1b[42m"
#define BACKGROUND_YELLOW  "\x1b[43m"
#define BACKGROUND_BLUE    "\x1b[44m"
#define BACKGROUND_MAGENTA "\x1b[45m"
#define BACKGROUND_CYAN    "\x1b[46m"
#define BACKGROUND_WHITE   "\x1b[47m"

#define STYLE_BOLD         "\x1b[1m"
#define STYLE_ITALIC       "\x1b[3m"
#define STYLE_UNDERLINE    "\x1b[4m"

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
void create(SList& sl, int n);
void createRandom(SList& sl, int n);
void output(SNode*& n);
int isEmty(SList& sl);
void insertHead(SList& sl, SNode* p);
void insertTail(SList& sl, SNode* p);
void insertAfter(SList& sl, SNode* q, SNode* p);
SNode* findSNode(SList& sl, int x);

#endif // !1