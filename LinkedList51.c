/*
	Description :- Find Maximum
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

int Maximum(PNODE First)
{
	 int iMax = 0;
	 
	 if(First == NULL)
	 {
		 printf("Linked List is emply\n");
		 return 0;
	 }
	 
	 iMax = First->data;
	 
	 while(First != NULL)
	 {
		 if(First->data > iMax)
		 {
			 iMax = First->data;
		 }
		 First = First->next;
	 }
	 return iMax;
}

int main()
{	
	PNODE Head = NULL;
	int iRet = 0;
	
	iRet = Maximum(Head);
	printf("Maximum is : %d\n",iRet);
	
	InsertLast(&Head, 11);
	InsertLast(&Head, 21);
	InsertLast(&Head, 51);
	InsertLast(&Head, 101);
	InsertLast(&Head, 111);
	InsertLast(&Head, 121);
	InsertLast(&Head, 151);
	
	Display(Head);
	
	iRet = Maximum(Head);
	printf("Maximum is : %d\n",iRet);
	
	return 0;
}
 