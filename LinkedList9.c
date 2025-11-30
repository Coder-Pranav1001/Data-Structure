/*
	Description :- Singly Linked List (Delete First And Delete Last)
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node 
{
	int data;
	struct node* next;
};
 
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));  // Step 1 = Allocate Memory
	
	newn->data = no;
	newn->next = NULL;
	
	if(*First == NULL) 	// If Linked List is empty
	{
		*First = newn;
	}
	else	// If Linked List contains atleast one node
	{
		newn->next = *First;
		*First = newn;
	}
}

void InsertLast(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));  // Step 1 = Allocate Memory
	PNODE temp = *First;
	
	newn->data = no;
	newn->next = NULL;
	
	if(*First == NULL) 	// If Linked List is empty
	{
		*First = newn;
	}
	else	// If Linked List contains atleast one node
	{
		while(temp->next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
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

int Count(PNODE First)
{
	int iCnt = 0;
	
	while(First != NULL)
	{
		iCnt++;
		First = First -> next;
	}
	return iCnt;	
}

void DeleteFirst(PPNODE First)
{
	PNODE temp = *First;
	
	if(*First == NULL) // Empty Linked List
	{
		return;
	}
	else if((*First) -> next == NULL) // 1 node in Linked List
	{
		free(*First);
		*First = NULL;
	}
	else // More than 1 node in Linked List
	{
		(*First) = (*First) -> next;
		free(temp);
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp = *First;
	
	if(*First == NULL) // Empty Linked List
	{
		return;
	}
	else if((*First) -> next == NULL) // 1 node in Linked List
	{
		free(*First);
		*First = NULL;
	}
	else // More than 1 node in Linked List
	{
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;	
		}
		free(temp->next);
		temp->next = NULL;
	}
}

int main()
{	
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertFirst(&Head, 51);
	InsertFirst(&Head, 21);
	InsertFirst(&Head, 11);
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);
	
	InsertLast(&Head, 101);
	InsertLast(&Head, 111);
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);
	
	DeleteFirst(&Head);
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);
	
	DeleteLast(&Head);
	Display(Head);
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);
	
	return 0;
}
 