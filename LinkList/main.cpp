#include"LinkList.h"
int main()
{
	SList sl;
	int choose = 0;
	int x, y, n, count = 0;
	SNode* p;
	SNode* q;
	SNode* result;
	menu();
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
			printf("Get lenght of Linked List: ");
			scanf("%d", &n);
			create(sl, n);
			output(sl, sl.head);
			break;
		case 2:
			printf("Get lenght of Linked List: ");
			scanf("%d", &n);
			createRandom(sl, n);
			output(sl, sl.head);
			break;
		case 3:
			printf("Get value to insert Head: ");
			scanf("%d", &x);
			p = createSNode(x);
			insertHead(sl, p);
			output(sl, sl.head);
			break;
		case 4:
			printf("Get value to insert Tail: ");
			scanf("%d", &x);
			p = createSNode(x);
			insertTail(sl, p);
			output(sl, sl.head);
			break;
		case 5:
			printf("Get value before node: ");
			scanf("%d", &y);
			q = createSNode(y);
			q = findSNode(sl, y);
			if (q == NULL) {
				printf("Not find node q !!\n");
			}
			printf("Get value after node: ");
			scanf("%d", &x);
			p = createSNode(x);
			insertAfter(sl, q, p);
			output(sl, sl.head);
			break;
		case 6:
			printf("\nGet value to find: ");
			scanf("%d", &y);
			result = findSNode(sl, y);
			if (result != NULL)
			{
				printf("Have value %d in Link List!!\n");
			}
			else {
				printf("Not find!!");
			}
			break;
		case 7:
			deleteHeadNode(sl);
			output(sl, sl.head);
			break;
		case 9:
			deleteTailNode(sl);
			output(sl, sl.head);
			break;
		case 10:
			output(sl, sl.head);
			break;
		case 0:
			printf("%s\tHave a nice day sir!!%s\n", GREEN, RESET);
			return 0;
		default:
			printf("Don't have that choose!!\n");
			break;
		}
	} while (choose != 0);
	_getch();
}