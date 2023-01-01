/*Implement matrix class as ADT.
Write a program to perform matrix addition, subtraction, and multiplication. 
In read matrix function, 
raise an exception if any attempt is made to have rows and columns beyond the array size. 
Raise an exception if any attempt is made to perform matrix operations on matrices which 
does not satisfy the matrix order criteria. 
Implement using C++.*/

#include <iostream>
using namespace std;
class Matrix
{
private :
int row;
int column;
int m[4][4];
public:
void readmatrix();
void displaymatrix();
friend Matrix operator+(Matrix a,Matrix b);
friend Matrix operator-(Matrix a,Matrix b);
friend Matrix operator*(Matrix a,Matrix b);
};
void Matrix :: readmatrix()
{
  cout<<"Enter the data for matrix"<<endl;
  cout<<"Enter the number of rows"<<endl;
  cin>>row;
  cout<<"Enter the number of columns"<<endl;
  cin>>column;
  try{
    if(row >4 || column >4)
    {
      throw 'e';
    }
    }
    catch(char c)
    {
      cout<<"The array size is more, only less than 4 is accepted"<<endl;
      exit(0);
    }
  cout<<"Enter the Matrix Elements"<<endl;
  for(int i=0 ;i<row;i++)
    {
      for(int j=0;j<column;j++)
        {
          cin>>m[i][j];
        }
    }
  }
void Matrix::displaymatrix()
{
    for(int i=0 ;i<row;i++)
    {
      for(int j=0;j<column;j++)
        {
          cout<<m[i][j]<<"\t";
          }
          cout<<endl;
      }
}
Matrix operator+(Matrix a,Matrix b)
{
  try{
    if((a.row != b.row)||(a.column != b.column))
    {
      throw 'e';
    }
  }
    catch(char c)
    {
      cout<<"The order of both matrix must be same for additon"<<endl;
      cout<<"Please enter valid orders"<<endl;
      exit(0);
    }
  Matrix  c;
  c.row = a.row;
  c.column = a.column;
    for(int i=0 ;i<a.row;i++)
    {
      for(int j=0;j<a.column;j++)
        {
          c.m[i][j] = a.m[i][j] + b.m[i][j] ;
        }
    }
  return c;
}
Matrix operator-(Matrix a,Matrix b)
{
  try{
    if((a.row != b.row)||(a.column != b.column))
    {
      throw 'e';
    }
  }
    catch(char c)
    {
      cout<<"The order of both matrix must be same for additon"<<endl;
      cout<<"Please enter valid orders"<<endl;
      exit(0);
    }
  Matrix  c;
  c.row = a.row;
  c.column = a.column;
    for(int i=0 ;i<a.row;i++)
    {
      for(int j=0;j<a.column;j++)
        {
          c.m[i][j] = a.m[i][j] - b.m[i][j] ;
        }
    }
  return c;
}
Matrix operator*(Matrix a,Matrix b)
{
  try{
    if(a.column != b.row)
    {
      throw 'e';
    }
  }
    catch(char c)
    {
      cout<<"The order of both matrix must be same for additon"<<endl;
      cout<<"Please enter valid orders"<<endl;
      exit(0);
    }
  Matrix  c;
  c.row = a.row;
  c.column = a.column;
    for(int i=0 ;i<a.row;i++)
    {
      for(int j=0;j<b.column;j++)
        {
          c.m[i][j] =0;
          for(int k=0;k<a.column;k++)
          c.m[i][j] += a.m[i][k] * b.m[k][j] ;
        }
    }
  return c;
}
int main()
{
  int choice;
  Matrix m1,m2;
  m1.readmatrix();
  m1.displaymatrix();
  m2.readmatrix();
  m2.displaymatrix();
  do{
  cout<<"Enter your choice \n 1] Addition \n 2] Subtraction \n 3] Multiplication \n4] Exit \n";
  cin>>choice;
    switch(choice)
      {
        case 1:
        Matrix m3;
  m3 = m1 + m2;
  cout<<"The Addition of the matrix is"<<endl;
  m3.displaymatrix();
        break;
        case 2:
        Matrix m4;
          m4 = m1 - m2;
  cout<<"The Subtraction of the matrix is "<<endl;
  m4.displaymatrix();
        break;
        case 3:
        Matrix m5;
          m5 = m1*m2;
        cout<<"Multiplication of the Matrix is"<<endl;
        m5.displaymatrix();
        break;
        case 4:
        exit(0);
      }
    }while(choice != 4);
  }

