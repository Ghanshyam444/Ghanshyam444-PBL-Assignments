/*Write a program using C++ to create a student database system 
containing the following information:
Name, roll number, Class, division, Date of Birth,
Blood group, Contact address, telephone number. 
Use Class, object, inline function.
Use static variables and static functions to maintain count of the number of students. 
Use constructor and destructor.*/

#include <iostream>
using namespace std;

class Student{
private:
string name,dob,address,blood_group;
long int rollno,clas,telephone_no;
char division;
public:
static int count; //static variable
Student () //constructor
{
cout<<"Student Object constructed"<<endl;
}
~Student() //destructior
{
cout<<"Object Destroyed"<<endl;
}
void read() //read function
{
cout<<"Enter name"<<endl;
getline(cin>>ws,name);
cout<<"Enter roll no"<<endl;
cin>>rollno;
cout<<"Enter class"<<endl;
cin>>clas;
cout<<"Enter division"<<endl;
cin>>division;
cout<<"Enter Date of Birth"<<endl;
getline(cin>>ws,dob);
cout<<"Enter Blood group"<<endl;
getline(cin>>ws,blood_group);
cout<<"Enter Telephone Number"<<endl;
cin>>telephone_no;
cout<<"Enter Address"<<endl;
getline(cin>>ws,address);
count ++;
}
inline void display(); //inline function
static int getcount(); //static function
};
int Student ::count = 0; //initialization of static variable
void Student :: display() //inline display function
{
cout<<"\n************************************************"<<endl;
cout<<"Name : "<<name <<endl;
cout<<"Roll NO : "<<rollno<<endl;
cout<<"Class : "<<clas<<endl;
cout<<"Division "<<division<<endl;
cout<<"Date of Birth :"<<dob<<endl;
cout<<"Blood Group : "<<blood_group<<endl;
cout<<"Telephone Number : "<<telephone_no<<endl;
cout<<"Address : "<<address<<endl;
}
int Student:: getcount() //defining static function
{
return count;
}
int main()
{
int n,choice;
static int i;
cout<<"Enter the maximum number of student entries"<<endl;
cin>>n;
Student s[n]; //creating array of object
do{
cout<<"\n 1] Enter Student Data\n 2] Display Student Data \n 3] Number of Student Entries \n 4] Exit \n";
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter the details of Student "<<i+1<<endl;
s[i].read();
i++;
break;
case 2:
for(int j=0;j<Student::getcount();j++)
{
s[j].display();
}
break;
case 3:
cout<<"\nThe Number of Student Data Entered is "<<endl<<Student::getcount();
break;
case 4:
exit(0);
}
}while(choice != 4);
return 0;
}
