/*Define a class to represent a bank account which includes the following members as: Data members:
a. Name of the depositor
b. Account Number
c. Withdrawal amount
d. Balance amount in the account Member Functions:
e. To assign initial values
f. To deposit an amount
g. To withdraw an amount after checking the balance
h. To display name and balance.
//Implement the program by using features of OOP in C++ */
#include <iostream>
#include <string>
using namespace std;
class bank
{
int account_no;
string name, type;
float balance;
public:
bank() {}
bank(int a, string b, string c, float d)
{
account_no = a;
name = b;
type = c;
balance = d;
}
void deposit(float a)
{
balance = balance + a;
}
void withdraw(float b)
{
if (balance >= b)
{
balance = balance - b;
display(0, b);
}
else
{
cout << endl
<< "*INSUFFICIENT BALANCE*" << endl
<< endl;
display(0, 0);
}
}
void display(float depo, float withdr)
{
cout << "NAME : " << name << endl;
cout << "ACCOUNT NUMBER : " << account_no << endl;
cout << "AMOUNT WITHDRAW : " << withdr << endl;
cout << "AMOUNT DEPOSIT : " << depo << endl;
cout << "UPDATED BALANCE : " << balance << endl;
}
};
int main()
{
string s, type;
int accountno, choice;
float bal, depo, withdr;
cout << "ENTER NAME : ";
cin >> s;
cout << "ENTER ACCOUNT NO. : ";
cin >> accountno;
cout << "ENTER TYPE : ";
cin >> type;
cout << "ENTER BALANCE : ";
cin >> bal;
bank b(accountno, s, type, bal);
do{
cout << "\nENTER CHOICE:" << endl;
cout << "1.DEPOSIT" << endl;
cout << "2.WITHDRAW" << endl;
cout << "3.DISPLAY"<<endl;
cout << "4.EXIT\n" << endl;
cin >> choice;
switch(choice)
{
case 1:
cout << "AMOUNT TO DEPOSIT : ";
cin >> depo;
b.deposit(depo);
b.display(depo, 0);
break;
case 2:
cout << "AMOUNT TO WITHDRAW : ";
cin >> withdr;
b.withdraw(withdr);
break;
case 3:
b.display(0,0);
break;
case 4:
exit(0);
}
}while(choice!=4);
return 0;
}
