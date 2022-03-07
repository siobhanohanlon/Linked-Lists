#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* NEXT;
}nodeT;

main()
{
	nodeT* headPtr = NULL; //indicates that the list is empty..
	int choice;
	nodeT* newNode;
	nodeT* temp;

	printf("1: Add Element to Start of List\t\t2:Add Element to End of List\t\t3: Display List\t\t-1: Exit\nPlease Enter Choice: ");
	scanf("%d", &choice);

	while (choice != -1)
	{
		if (choice == 1)
		{
			newNode = (nodeT*)malloc(sizeof(nodeT));

			//Populating the new node
			printf("\nPlease Enter the Nodes Value:");
			scanf("%d", &newNode->data);

			//Collecting it into the list
			newNode->NEXT = headPtr;
			headPtr = newNode;
		}

		else if (choice == 2)
		{
			if (headPtr == NULL)
			{
				newNode = (nodeT*)malloc(sizeof(nodeT));

				//Populating the new node
				printf("\nPlease Enter the Nodes Value:");
				scanf("%d", &newNode->data);

				//Collecting it into the list
				newNode->NEXT = headPtr;
				headPtr = newNode;
			}

			newNode = (nodeT*)malloc(sizeof(nodeT));

			//Populating the new node
			printf("\nPlease Enter the Nodes Value:");
			scanf("%d", &newNode->data);

			//Collecting it into the list
			temp = headPtr;

			while (temp->NEXT != NULL)
			{
				temp = temp->NEXT;
			}

			temp->NEXT = newNode;
			newNode-> = NULL;
		}

		else if (choice == 3)
		{
			temp = headPtr;

			while (temp)
			{

			}
		}

		printf("\n1: Add Element to Start of List\t\t2:Add Element to End of List\t\t3: Display List\t\t-1: Exit\nPlease Enter Choice: ");
		scanf("%d", &choice);
	}
}