//============================================================================
// Name        : LinkedListCalcNodes.cpp
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
	node*first = NULL;
	node*last;
	node*Node;
public:
	void create()
	{
		first = new node();
		cout<<"Enter the data to be inserted into the node";
		cin>>first->data;
		first->next = NULL;
		last = first;
		int addnode;
		cout<<"Do you want to continue?";
	    cin>>addnode;
		while(addnode)
		{
			Node = new node();
			cout<<"Enter the data for the node";
			cin>>Node->data;
			cout<<"Do you want to continue?";
		    cin>>addnode;
			Node->next = NULL;
			last->next = Node;
			last = Node;
		}
		Display(first);
	}
	void Display(node*p)
	{
		while(p!=NULL)
		{
			cout<<p->data;
			p = p->next;
		}
	}
};
int main()
{
	LinkedList *list = new LinkedList();
        list->create();



	return 0;
}
