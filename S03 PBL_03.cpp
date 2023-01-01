/*Consider we want to store the information of different vehicles. 
Create a class named Vehicle with two data member named mileage and price.
Create its two subclasses: 
*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol). 
*Bike with data members to store the number of cylinders, number of gears, 
cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches).
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. 
Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
Now, store and print the information of an Audi and a Ford car 
(i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.).*/
#include <iostream>
using namespace std;
class Vehicles
{
int mileage;
int price;
public:
void read()
{
cout<< "Mileage (in mpl) : ";
cin >> mileage;
cout << "Price (in lakhs): ";
cin >> price;
}
void display()
{
cout << "Milage (in mpl): " << mileage<< endl;
cout << "Price (in lakhs): " << price<< endl;
}
};
class Car : public Vehicles
{
int store_ownwership_cost;
int Warranty;
int seating_capacity;
string fuel_type;
public:
void read()
{
cout << "Ownership Cost(in lakhs) : ";
cin >> store_ownwership_cost;
cout << "Warranty (in years): ";
cin >> Warranty;
cout << "Seating Capacity : ";
cin >> seating_capacity;
cout << "Fuel Type : ";
cin >> fuel_type;
}
void display()
{
cout << "Ownership cost of Car (in lakhs):" << store_ownwership_cost<< endl;
cout << "Warranty (in years): " << Warranty << endl;
cout << "Seating Capacity : " << seating_capacity<< endl;
cout << "Fuel Type : " << fuel_type << endl;
}
};
class Bike : public Vehicles
{
int no_of_cylinders;
int no_of_gears;
string cooling_type;
string wheel_type;
float fuel_tank_Size;
public:
void read()
{
cout << "Number Of cylinder : ";
cin >> no_of_cylinders;
cout << "Number Of gears : ";
cin >> no_of_gears;
cout << "Cooling type : ";
cin >> cooling_type;
cout << "Wheel type : ";
cin >> wheel_type;
cout << "Size of Fuel tank (in inches) : ";
cin >> fuel_tank_Size;
}
void display()
{
cout << "Number of Cylinder:" << no_of_cylinders << endl;
cout << "Number of Gears : " << no_of_gears << endl;
cout << "Cooling Type : " << cooling_type<< endl;
cout << "Wheel Type : " << wheel_type << endl;
cout << "Size of Tank (in inches) : " <<fuel_tank_Size << endl;
}
};
class Audi : public Car
{
string Model_type;
public:
void read()
{
cout << "Model Type : ";
getline(cin>>ws,Model_type);
Vehicles::read();
Car::read();
}
void display()
{
cout << "Information of Audi ";
cout << "Model Type : " << Model_type << endl;
Vehicles::display();
Car::display();
}
};
class Ford : public Car
{
string Model_type;
public:
void read()
{
cout << "Model Type : ";
getline(cin>>ws,Model_type);
Vehicles::read();
Car::read();
}
void display()
{
cout << "Information of Ford ";
cout << "Model Type : " << Model_type << endl;
Vehicles::display();
Car::display();
}
};
class Bajaj : public Bike
{
string type;
public:
void read()
{
cout << "Model Type : ";
getline(cin>>ws,type);
Vehicles::read();
Bike::read();
}
void display()
{
cout << "Information of Bajaj Bike ";
cout << "Model Type : " << type << endl;
Vehicles::display();
Bike::display();
}
};
class TVS : public Bike
{
string type;
public:
void read()
{
cout << "Model Type : ";
getline(cin>>ws,type);
Vehicles::read();
Bike::read();
}
void display()
{
cout << "Information of Bajaj Bike ";
cout << "Model Type : " << type << endl;
Vehicles::display();
Bike::display();
}
};
int main()
{
int choice;
do{
Audi a;
Ford f;
TVS t;
Bajaj b;
cout<<"\n\nMenu::\n1] Audi \n2] Ford \n3] TVS \n4] Bajaj\n5] exit"<<endl;
cin>>choice;
switch(choice)
{
case 1:
a.read();
cout<<endl;
a.display();
break;
case 2:
f.read();
cout<<endl;
f.display();
break;
case 3:
t.read();
cout<<endl;
t.display();
break;
case 4:
b.read();
cout<<endl;
b.display();
break;
case 5:
exit(0);
break;
}
}while(choice!=5);
return 0;
}
