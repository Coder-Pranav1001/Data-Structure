/*
	Description :- Doubly Linked List(Insert First)
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>
  
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		 newn->next = *First;
		 (*First)->prev = newn;
		 *First = newn;
	}
}

void Display(PNODE First)
{
	printf("Element from the linked list are : \n");
	
	while(First != NULL)
	{
		printf("| %d | -> ",First->data);
		First = First -> next;
	}
	printf("NULL \n");
}

int main()
{
	PNODE Head = NULL;
	
	InsertFirst(&Head, 51);
	InsertFirst(&Head, 21);
	InsertFirst(&Head, 11);
	
	Display(Head);
	
	return 0; 
}