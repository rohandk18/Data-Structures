//============================================================================
// Name        : Array_Binary_Search.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class BinarySearch
{
public:
	int binsearch(int length,int key,int arr[])
	{
		int l = 0;
		int h = length-1;
	    while(l<=h)
	    {
	    	 int mid = (l+h)/2;
	    	 if(key==arr[mid])
	   		    {
	    		   	return mid;
	  		    }
	         else if(key<arr[mid])
	   		    {
	    		   	h = mid-1;
    		    }
	         else
    		        l = mid+1;
	    }
	   return -1;
	}
};
int main()
{
	BinarySearch b;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Element found at "<<b.binsearch(10,2,arr)<<" th index";
	return 0;
}
