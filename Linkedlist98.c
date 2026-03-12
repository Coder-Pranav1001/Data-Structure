/*
	Description :- Return Addition of all digits of every elements from linkedlist
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

void SumDigits(PNODE Head)
{
	int iSum = 0;
	int iNo = 0;
	
	while(Head != NULL)
	{
		iNo = Head->data;
		
		while(iNo != 0)
		{
			iSum = iSum + (iNo % 10);
			iNo = iNo / 10;
		}
		printf("%d : %d\n",Head->data,iSum);
		iSum = 0;
		Head = Head->next;
	}
}

int main()
{
	PNODE First = NULL;
	
	InsertFirst(&First,6);
	InsertFirst(&First,28);
	InsertFirst(&First,496);
	InsertFirst(&First,24);
	InsertFirst(&First,22);
	InsertFirst(&First,8128);
	
	Display(First);
	
	SumDigits(First);
	
	return 0;
}