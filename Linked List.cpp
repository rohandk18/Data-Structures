//============================================================================
// Name        : Linked.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//struct node*first;
struct node
{
	int data;
	node*next;
}*first = NULL;

void create(int A[],int n)
{
	struct node*t,*last;
	first = new node();
	first->data = A[0];
	first->next = NULL;
	last = first;

	for(int i=1;i<n;i++)
	{
		t = new node();
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
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
int main()
{
    int A[] = {3,5,7,10,15};
    create(A,5);
    Display(first);
	return 0;
}
