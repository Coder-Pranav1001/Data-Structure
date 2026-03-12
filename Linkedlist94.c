/*
	Description :- Search Minimum elements from linked list
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	
	if(*Head != NULL)
	{
		newn->next = *Head;
	}
	*Head = newn;
}	
	/*if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}*/


void Display(PNODE Head)
{
	printf("Elements of linked list are : \n");
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head = Head->next;
	}
	printf("NULL\n");
}

int Minimum(PNODE Head)
{
	int iMin = 0;
	if(Head != NULL)
	{
		iMin = Head->data;
	}

	while(Head != NULL)
	{
		if(Head->data < iMin)
		{
			iMin = Head->data;
		}
		Head = Head->next;
	}
	return iMin;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	
	iRet = Minimum(First);
	printf("Minimum element is : %d",iRet);
	
	return 0;
}