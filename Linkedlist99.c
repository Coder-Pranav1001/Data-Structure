/*
	Description :- Search First Occurrence
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

int SearchFirstOccurrence(PNODE Head, int iNo)
{
	int iPos = 1;
	
	while(Head != NULL)
	{
		if(Head->data == iNo)
		{
			break;
		}
		iPos++;
		Head = Head->next;
	}
	if(Head == NULL)
	{
		return -1;
	}
	else
	{
		return iPos;
	}
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,6);
	InsertFirst(&First,28);
	InsertFirst(&First,496);
	InsertFirst(&First,24);
	InsertFirst(&First,28);
	InsertFirst(&First,22);
	InsertFirst(&First,128);
	
	Display(First);
	
	iRet = SearchFirstOccurrence(First,28);
	if(iRet == -1)
	{
		printf("There is no such element\n");
	}
	else
	{
		printf("Elements is there at index : %d\n",iRet);
	}
	
	return 0;
}