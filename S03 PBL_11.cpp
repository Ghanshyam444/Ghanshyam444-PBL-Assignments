/*The ticket booking system of Cinemax theatre has to be implemented using C++ program. 
There are 15 rows and 10 seats in each row. 
Doubly linked lists have to be maintained to keep track of free seats in rows. 
Assume some random booking to start with. 
Use an array to store pointers (Head pointer) to each row. On demand
a. The list of available
b. seats is to be displayed
c. The seats are to be booked
d. The booking can be cancelled*/


# include<iostream>
using namespace std;
struct node
{
	node *prev;
	char status;
	node *next;
};
class Cinemax
{
	private:
	node* head[15];
	public:
		void create();
		void book();
		void cancel();	
		void display();
};
void Cinemax::create()
{
	for(int i=0;i<15;i++)
	{
		 int count = 10;
		 	node *last,*newnode;
		 	newnode = new node;
		 	newnode -> status = 'A';
		 	newnode -> prev = NULL;
		 	newnode-> next = NULL;
			 head[i] = newnode;
			 last = newnode;
			 while(count--)
			 {
			 	node*nn;
			 	nn = new node;
			 	last -> next = nn;
			 	nn -> status = 'A';
			 	nn -> next = NULL;
			 	nn -> prev = last;
			 	last = nn;
			 }
	}
}
void Cinemax::display()
{
	for(int i=0;i<15;i++)
	{
		node *p;
		p = head[i];
		int count =10;
		while(p -> next != NULL)
		{
			cout<<p->status<<" ";
			p = p -> next;
		}
		cout<<endl;
	}
}
void Cinemax::book()
{
	int row,column;
	cout<<"Enter The Details of the Seat you want to book "<<endl;
	cout<<"Enter the row number"<<endl;
	cin>>row;
	cout<<"Enter the column number"<<endl;
	cin>>column;
	node*p = head[row-1];
	for(int i=1;i<column;i++)
	{
		p = p-> next;
	}
	cout<<"\nThe Current Status of the seat is  "<<p-> status<<endl;
	if(p->status = 'A')
	{
		p-> status = 'B';
		cout<<"Congratulations! Your Seat is booked"<<endl;
	}
	else
	{
		cout<<"Sorry, Seat is Already Booked"<<endl;
	}
}
void Cinemax::cancel()
{
	int row,column;
	cout<<"Enter the Seat Details you want to cancel"<<endl;
	cout<<"Enter the row number"<<endl;
	cin>>row;
	cout<<"Enter the column number"<<endl;
	cin>>column;
	node *p;
	p = head[row-1];
	for(int i=1;i<column;i++)
	{
		p = p-> next;
	}
	cout<<"The current Status of the seat is  "<<p -> status;
	if(p->status = 'B')
	{
		p-> status = 'A';
		cout<<"Your Seat has been Cancelled"<<endl;
	}
	else
	{
		cout<<" This seat is already vacant ????????"<<endl;
	}
}
int main()
{
	int choice;
	Cinemax c;
	c.create();
	do{
	cout<<"Enter the operation You want to perform\n1] Book \n2] Cancel \n3] Display \n4] Exit\n"<<endl;
	cin>>choice;
		switch(choice)
		{
			case 1:
				c.book();
				break;
			case 2:
				c.cancel();
				break;
			case 3:
				c.display();
				break;
			case 4:
				exit(0);
				break;
		}
	}while(choice!=4);
}   

