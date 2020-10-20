//============================================================================
// Name        : LinkedListReverse.cpp
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
    public:

	node*first = NULL;
	node*last;
	node*Node;

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
	}
	void Display(node*p)
	{
		while(p!=NULL)
		{
			cout<<p->data;
			p = p->next;
		}
	}

    void Reversebyelement(node*p)
    {
    	node*q = p;
    	int arrcpy[5];
    	for(int i=0;i<5;i++)
    	{
    		arrcpy[i] = p->data;
    		p = p->next;
    	}

    	for(int i=4;i>=0;i--)
    	    {
    	    	q->data = arrcpy[i];
    	    	q = q->next;
    	    }


    }

	void ReverseByAddress(node*p)     //Using sliding pointers
	{
		node*r = NULL;
		node*q = NULL;
		while(p!=NULL)
		{
			r = q;
			q = p;
			p = p->next;
			q->next = r;
		}
		first = q; //---------------As q will point to the last node which becomes the first node after reversing.And thats why the last node becomes the first node.
	}
};
int main()
{
	LinkedList *list = new LinkedList();
    list->create();
    list->Display(list->first);
    list->ReverseByAddress(list->first);     //--------reversing by changing the address of next node------------
    //list->Reversebyelement(list->first);   //--------reversing by copying the elements to the array------------
    list->Display(list->first);


	return 0;
}
