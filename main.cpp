#include"LinkList.h"
int main()
{
	SList list;

	SNode* head = new SNode();
	SNode* second = new SNode();
	SNode* third = new SNode();
	SNode* tail = new SNode();
	head->data = 1;
	head->Node = second;
	second->data = 2;
	second->Node = third;
	third->data = 3;
	third->Node = tail;
	tail->data = 4;
	tail->Node = NULL;

	list.head = head;
	list.tail = tail;
	int choose = 0;
	int x, y;
	SNode* p;
	SNode* q;
	SNode* result;
	menu();
	do
	{
		printf("Choose excercise u want : ");
		if (!scanf("%d", &choose))
			choose = -1;
		fixScanf();
		switch (choose)
		{
		case 1:
			getLinkList(list.head);
			break;
		case 2:
			printf("Get value to insert Head: ");
			scanf("%d", &x);
			p = createSNode(x);
			insertHead(list, p);
			getLinkList(list.head);
			break;
		case 3:
			printf("Get value to insert Tail: ");
			scanf("%d", &x);
			p = createSNode(x);
			insertTail(list, p);
			getLinkList(list.head);
			break;
		case 4:
			printf("Get value before node: ");
			scanf("%d", &y);
			q = createSNode(y);
			q = findSNode(list, y);
			if (q == NULL) {
				printf("Not find node q !!\n");
			}
			printf("Get value after node: ");
			scanf("%d", &x);
			p = createSNode(x);
			insertAfter(list, q, p);
			getLinkList(list.head);
			break;
		case 5:
			printf("\nGet value to find: ");
			scanf("%d", &y);
			result = findSNode(list, y);
			if (result != NULL)
			{
				printf("Have value %d in Link List!!\n");
			}
			else {
				printf("Not find!!");
			}
			break;

		case 0:
			printf("\tHave a nice day sir!!\n");
			return 0;
		default:
			printf("Don't have that choose!!\n");
			break;
		}
	} while (choose != 0);
	_getch();
}