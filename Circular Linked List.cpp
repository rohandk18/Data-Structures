//============================================================================
// Name        : Circular.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct node
{
	int data;
	node*next;
};
class LinkedList
{
	node*first,*last,*temp;
public:
	void create()
	{
		first = new node();
		cout<<"Enter the data";
		cin>>first->data;
		//first->next = NULL; //----Use this if it was a singly linked List--------
		first->next = first;
		last = first;
		cout<<"Do you want to continue?";
		int addnode;
		cin>>addnode;
		while(addnode)
		{
			temp = new node();
			cout<<"Enter the data";
			cin>>temp->data;
                        temp->next=NULL;  //----Use this if it was a singly linked List-------
			temp->next = last->next;
			last->next = temp;
			last = temp;
			cout<<"Do you want to continue?";
			cin>>addnode;
		}
		Display(first);
	}

	void Display(node*p)
	{
		do
		{
			cout<<p->data;
		    p = p->next;
		}
		while(p!=first);
	}
  };
int main()
{
	LinkedList *list = new LinkedList();
	list->create();
	return 0;
}
