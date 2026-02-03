/*
	Description :- Addition of All number
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

int Addition(PNODE First)
{
	int iSum = 0;
	
	while(First != NULL)
	{
		iSum = iSum + (First->data);
		First = First -> next;
	}
	return iSum;
}

int main()
{	
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertLast(&Head, 11);
	InsertLast(&Head, 21);
	InsertLast(&Head, 51);
	InsertLast(&Head, 101);
	InsertLast(&Head, 111);
	InsertLast(&Head, 121);
	
	Display(Head);
	
	iRet = Addition(Head);
	printf("Addition is : %d\n",iRet);
	
	return 0;
}
 