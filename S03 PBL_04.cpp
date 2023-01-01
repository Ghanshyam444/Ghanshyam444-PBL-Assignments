/*Implement a class Complex which represents the Complex Number data type. Implement the following operations:
a. Constructor (including a default constructor which creates the complex number 0+0i).
b. Overloaded operator + to add two complex numbers.
c. Overloaded operator * to multiply two complex numbers.
d. Overloaded << and >> to print and read Complex Numbers.
Write a C + + program to read and display all project information using Operator Overloading.*/

#include <iostream>
using namespace std;
class Complex
{
int real;
int imag;
public:
Complex() //constructor
{
real = 0;
imag =0;
}
Complex operator+(Complex c3);
Complex operator-(Complex c3);
Complex operator*(Complex c3);
void conjugate();
friend ostream& operator <<(ostream&out,Complex &c);
friend istream& operator >>(istream&in,Complex &c);
};
ostream& operator <<(ostream&out,Complex &c ) //overloading cout<< operator
{
cout<<"(";
out <<c.real;
cout<<")";
cout<<"+";
cout<<"(";
out <<c.imag;
cout<<")";
cout<<"i"<<endl;
return out;
}
istream& operator>>(istream& in,Complex &c) //overloading cin>>operator
{
cout<<"\nEnter the real part"<<endl;
in>>c.real;
cout<<"Enter the imaginary part"<<endl;
in>>c.imag;
return in;
}
void Complex:: conjugate() //displaying conjugate of complex number
{
cout<<"The Conjugate of entered Complex number is "<<endl;
cout<<"("<<real<<")"<<" - ("<<imag<<")"<<"i\n"<<endl;
}
Complex Complex:: operator+(Complex c) //overloading addition operator
{
Complex addition;
addition.real = real + c.real;
addition.imag = imag + c.imag;
return addition;
}
Complex Complex:: operator-(Complex c) //overloading subtraction operator
{
Complex subtraction;
subtraction.real = real - c.real;
subtraction.imag = imag - c.imag;
return subtraction;
}
Complex Complex:: operator*(Complex c) // overloading multiplication operator
{
Complex multiplication;
multiplication.real = real*c.real - imag*c.imag;
multiplication.imag = real*c.imag + imag*c.real;
return multiplication;
}
int main()
{
Complex c1,c2,c;
int choice;
//Making a menu driven program for performing different operations on complex numbers
do{
cout<<"Enter your choice \n 1] Addition \n 2] Subtraction \n 3] Multiplication \n 4] Conjugate \n 5] Exit"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"\nEnter Complex C1"<<endl;
cin>>c1;
cout<<c1;
cout<<"\nEnter Complex C2"<<endl;
cin>>c2;
cout<<c2;
c = c1 + c2 ;
cout<<"\nThe Addition is ";
cout<<c<<endl;
break;
case 2:
cout<<"\n Enter Complex C1"<<endl;
cin>>c1;
cout<<c1;
cout<<"\nEnter Complex C2"<<endl;
cin>>c2;
cout<<c2;
c = c1 - c2 ;
cout<<"\nThe Subtraction is ";
cout<<c<<endl;
break;
case 3:
cout<<"\nEnter Complex C1"<<endl;
cin>>c1;
cout<<c1;
cout<<"\nEnter Complex C2"<<endl;
cin>>c2;
cout<<c2;
c = c1 * c2 ;
cout<<"\nThe Multiplication is ";
cout<<c<<endl;
break;
case 4:
cout<<"Enter the Complex Number"<<endl;
cin>>c;
cout<<c;
c.conjugate();
break;
case 5:
exit(0);
break;
}
}while(1);
}
