//============================================================================
// Name        : Array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class ArrayAdt
{
public:
	  int length;  //----------------total elements of the array------------
	  int size;
	  int arr[20] ;
	void display()
	{
         for(int i=0;i<length;i++)
         {
        	 cout<<" [ "<<arr[i]<<" ] ";
         }
	}

	void Append(int x) //-------will add an element to the the existing array----//
	{
		if(length<size)
		arr[length++] = x;

	}

	void insert(int index,int x)
	{
		if(index>=0 && index<=length)
		{
            for(int i=length;i>=index;i--)
            {
            	arr[i+1] = arr[i];
            }
            arr[index] = x;
            length++;
		}
	}

	void deleteElement(int index)
	{
		for(int i=index;i<length-1;i++)
		{
			arr[i] = arr[i+1];
		}
		length--;
	}

	void search(int x)
	{
		bool element = false;
		for(int i=0;i<length;i++)
		{
			if(arr[i]==x)
			{
				element = true;
			}
		}
		if(element == true )
			cout<<" element found "<<x;
		else
		cout<<"element not found";
	}

	void get(int index)
	{
		if(index>=0 && index<length)
		{
			cout<<" Element at "<<index<<" is "<<arr[index];
		}
	}

	void set(int index,int x)
	{
		if(index>=0 && index<length)
		{
			arr[index] = x;
			cout<<" Element at "<<index<<" set to "<<x;
		}
	}

	void max()
	{
	   int max = arr[0];
	   for(int i=0;i<length;i++)
	   {
		   if(arr[i]>max)
		   {
			   max = arr[i];
		   }
	   }
	   cout<<" Max of all the elements in the given array is "<<max;

	 }

	void sum()
	{
		int total = 0;
		for(int i=0;i<length;i++)
		{
			total = total+arr[i];
		}
		cout<<" Sum of all the elements in the given array is "<<total;
	}

	void reverse()
	{
		for(int i=0;i<length/2;i++)//-----------should iterate till the middle of the array only------//
		{
			int temp;
			temp = arr[i];
			arr[i] = arr[length-1-i];
			arr[length-1-i] = temp;
		}
	}


};

int main()
{

	 ArrayAdt arr;
	 arr.arr[0] = 2;
	 arr.arr[1] = 3;
	 arr.arr[2] = 4;
	 arr.arr[3] = 5;
	 arr.arr[4] = 6 ;

	 arr.size   = 10;
	 arr.length = 5;

	 arr.Append(20);
	 arr.insert(1,100);  //-------insert 100 at index 1--------//
	 arr.deleteElement(1); //------delete element at index 1 which 100 in this case-------//
	 arr.search(300);
	 arr.get(1);
	 arr.set(0,500);//-------set 500 at 0th index---------//
	 arr.sum();
	 arr.max();
	 arr.reverse();
	 arr.display();
	 return 0;
}


