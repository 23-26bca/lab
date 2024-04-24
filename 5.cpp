// Write a C++ program to create a class ‘item’ with data members itemid and itemprice (under private visibility label ) and member functions getdata() and printdata() to accept and print the details of items under public visibility label.  The program should the accept and print the details of two items.#

#include<iostream.h>
#include<conio.h>
class item
{
	int itemid,itemprice;
	public:
		void getdata()
		7B
			cout<<"Enter itemid:"<<endl;
			cin>>itzemid;
		
			cout<<"Enter Price:"<<endl;
			cin>>itemprice;
		}
		void printdata()
		{
			cout<<"Itemid : "<<itemid;
			cout<<"Price : "<<itemprice;  
		}
};


void main()
{
	item obj1,obj2;
	obj1.getdata();
	obj2.getdata();
        obj1.printdata();
	obj2.printdata();
	getch();
}
 