/*Create a base class called 'SHAPE' having-two data members of type double -
member function get-data( )to initialize base class data members - 
pure virtual member function display-area( )to compute and display the area of the geometrical object. 
Derive two specific classes 'TRIANGLE' and 'RECTANGLE' from the base class Using these three classes, 
design a program that will accept the dimension of a triangle / rectangle interactively and display the area.
 Implement using C++.*/
 
#include <iostream>
using namespace std;
class shape{
private:
double length ;
double breadth;
public:
void read() //read function
{
cout<<"Enter Dimension 1"<<endl;
cin>>length;
cout<<"Enter Dimension 2"<<endl;
cin>>breadth;
}
int getlength1() //accessor
{
return length;
}
int getbreadth() //accessor
{
return breadth;
}
virtual void display_area()=0; //pure virtual function
};
class Rectangle : public shape{
public:
void display_area() //defining overriden function
{
cout<<"Area of the rectangle is"<<(getlength1()*getbreadth())<<endl;
}
};
class Triangle : public shape{
public:
void display_area() //defining overriden function
{
cout<<"Area of the triangle is "<<((0.5)*getlength1()*getbreadth())<<endl;
}
};
int main()
{
int choice;
shape *base_ptr;
Rectangle rect;
Triangle tri;
//Making a Menu Driven program
do{
cout<<"\nEnter your choice \n1] Rectangle \n2] Triangle \n3] Exit"<<endl;
cin>>choice;
switch(choice)
{
case 1:
base_ptr = &rect;
base_ptr -> read();
base_ptr -> display_area();
break;
case 2:
base_ptr = &tri;
base_ptr -> read();
base_ptr -> display_area();
break;
case 3:
exit(0);
break;
}
}while(choice!=3);
}
