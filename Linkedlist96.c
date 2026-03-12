/*
	Description :- Display Summation of facters of each number
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

void SumFactors(PNODE Head)
{
	int iNo = 0;
	int i = 0;
	int iSum = 0;
	
	while(Head != NULL)
	{
		for(i = 1, iSum = 0, iNo = Head->data; i <= iNo/2; i++)
		{
			if(iNo % i ==0)
			{
				iSum = iSum + i;
			}
		}
		printf("%d : %d\n",Head->data,iSum);
		
		Head = Head->next;
	}
}

int main()
{
	PNODE First = NULL;
	
	InsertFirst(&First,50);
	InsertFirst(&First,20);
	InsertFirst(&First,38);
	InsertFirst(&First,24);
	InsertFirst(&First,22);
	
	Display(First);
	
	SumFactors(First);
	
	return 0;
}