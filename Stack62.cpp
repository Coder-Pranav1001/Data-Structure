/*
	Description :- Stack Push and Pop Emements using Generic
	Author :- Pranav R Sonawane
*/

#include<iostream>
using namespace std;

template <class T>
struct node
{
	T data;
	struct node * next;
};

template <class T>
class Stack
{
	public:
		struct node<T> * First;
		int iCount;
		
		Stack();
		
		bool IsStackEmpty();
		void Push(T no); // Insert
		T Pop(); //  Delete
		void Display();
};

template <class T>
Stack<T> :: Stack()
{
	First = NULL;
	iCount = 0;
}

template <class T>
bool Stack<T> :: IsStackEmpty()
{
	if(iCount == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class T>
void Stack<T> :: Push(T no) // InsertFirst
{
	struct node<T> * newn = new struct node<T>;
	
	newn->data = no;
	newn->next = NULL;
	
	if(First == NULL)
	{
		First = newn;
	}
	else
	{
		newn->next = First;
		First = newn;
	}
	
	iCount++;
	
	cout<<no<<" gets pushed in the stack succesfully"<<"\n";
}

template <class T>
T Stack<T> :: Pop() // DeleteFirst
{
	if(First == NULL)
	{
		cout<<"Unable to pop the element as Stack is empty"<<"\n";
		return -1;
	}
	else
	{
		T value = First -> data;
		struct node<T> * temp = First;
		
		First = First -> next;
		delete temp;
		
		iCount--;
		
		return value;
	}
}

template <class T>
void Stack<T> :: Display()
{
	if(First == NULL)
	{
		cout<<"Stack is Empty"<<"\n";
	}
	else
	{
		cout<<"Element of stack are : "<<"\n";
		
		struct node<T> * temp = First;
		while(temp != NULL)
		{
			cout<<"| "<<temp->data<<" | -> ";
			temp = temp -> next;
		}
		cout<<" NULL"<<"\n";
	}
}

int main()
{
	int iRet = 0;
	Stack <char>obj1;
	obj1.Push('D');
	obj1.Push('C');
	obj1.Push('B');
	obj1.Push('A');
	obj1.Display();
	iRet = obj1.Pop();
	cout<<"Poped element is : "<<iRet<<"\n";
	iRet = obj1.Pop();
	cout<<"Poped element is : "<<iRet<<"\n";
	obj1.Display();
	
	cout<<"---------------------------------\n";
	
	Stack <int>obj2;
	obj2.Push(11);
	obj2.Push(21);
	obj2.Push(51);
	obj2.Push(101);
	obj2.Display();
	iRet = obj2.Pop();
	cout<<"Poped element is : "<<iRet<<"\n";
	iRet = obj2.Pop();
	cout<<"Poped element is : "<<iRet<<"\n";
	obj2.Display();
	
	return 0;
}
 