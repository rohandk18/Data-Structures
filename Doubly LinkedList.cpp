//============================================================================
// Name        : Doubly.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct node
{
	node*prev;
	int data;
	node*next;
};
class DoublyLinkedList
{
	node*first,*last,*temp;
public:
	void create()
	{
	  first = new node();
	  cout<<"Enter the data";
	  cin>>first->data;
	  first->prev = NULL;
	  first->next = NULL;
	  last = first;
	  int addnode;
	  cout<<"Do you want to continue?";
	  cin>>addnode;
	  while(addnode)
	  {
		  temp = new node();
		  cout<<"enter the data";
		  cin>>temp->data;
		  last->next = temp;
		  temp->next = NULL;
		  temp->prev = last;
		  last = temp;
		  cout<<"Do you want to continue?";
		  cin>>addnode;
	  }
	  display(first);
	  displayReverse(last);
	}

	void display(node*p)
	{
		while(p!=NULL)
		{
		   cout<<p->data<<"\n";
		   p = p->next;
		}
	}

	void displayReverse(node*p)
		{
			while(p!=NULL)
			{
			   cout<<p->data<<"\n";
			   p = p->prev;
			}
		}
};
int main()
{
	DoublyLinkedList *list = new DoublyLinkedList();
	list->create();
	return 0;
}
