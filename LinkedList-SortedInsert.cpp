//============================================================================
// Name        : LinkedList-SortedInsert.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node*next;
};

class LinkedList{

private:
	Node*first,*last,*temp;
	Node*p,*l;
public:
	void sortedInsert(int data)
	{
		temp=new Node();
		temp->data=data;
		temp->next=NULL;
		p = first;
		if(first==NULL)
		{
			first=temp;
		}

		else{
			while(p && p->data<data)
			{
			  l = p;
			  p = p->next;
			}
			if(p==first)
			{
			  temp->next = first;
			  first = temp;
			}
			else
			{
				temp->next = l->next;
				l->next = temp;
			}
		}
	}

	void print()
	{
		Node*p = first;
		while(p!=NULL)
		{
			cout<<p->data<<" ";
			p = p->next;
		}
	}


};
int main() {

	LinkedList *linkedList = new LinkedList();
	linkedList->sortedInsert(10);
	linkedList->sortedInsert(30);
	linkedList->sortedInsert(60);
	linkedList->sortedInsert(100);
	linkedList->sortedInsert(110);
	linkedList->sortedInsert(5);
	linkedList->sortedInsert(15);
	linkedList->sortedInsert(20);
	linkedList->sortedInsert(25);
	linkedList->print();

	return 0;
}

//Output:-   5 10 15 20 25 30 60 100 110

