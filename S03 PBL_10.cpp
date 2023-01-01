/*Set A of customers like pizza and set B of customers like a burger. 
Write a C + +program to store two sets using an array. compute and display-
a. Set of customers who like either pizza or burger or both
b. Set of customers who like both pizza and burger.
c. Set of customers who like only pizza, not burger.
d. Set of customers who like only burger not pizza.
e. Number of customers who like neither pizza nor burger.*/

#include <iostream>
using namespace std;
class customer
{
private:
int id;
int total;
public:
int a[10];
int c[10];
int getid();
void accept();
void display();
friend void unon(customer p[],customer b[],int p_size,int b_size);
friend void intersect(customer q[],customer d[], int q_size, int d_size);
friend void difference(customer m[],customer n[], int m_size ,int n_size);
};
int customer::getid()
{
  return id;
}
customer inter;
void customer::accept()
{
  cout<<"\nEnter Id of the Customer"<<endl;
  cin>>id;
 }
void customer::display()
{
  cout<<" "<<id;
}
void unon(customer p[],customer b[],int p_size,int b_size)
{
  int l=0,flag=0;
  cout<<"{";
    for(int k=0;k<p_size;k++)
      {
        p[k].display();
        cout<<",";
        inter.c[l]= p[k].id;
        l++;
        }
    for(int i=0;i<b_size;i++)
      {
        flag= 0;
        for(int j=0;j<p_size;j++)
          {
          if(b[i].getid() == p[j].getid())
          {flag = 1;}
            }
           if(flag ==0)
           {
             b[i].display();
             cout<<",";
             inter.c[l] = b[i].id;
             l++;
           }
      }
      cout<<"}"<<endl;
}
void intersect(customer q[],customer d[],int q_size,int d_size)
{
  int l=0;
  cout<<"{";
    for(int k=0;k<q_size;k++)
      {
        for(int j=0;j<d_size;j++)
          {
            if(q[k].id == d[j].id)
            {
              q[k].display();
              cout<<",";
              inter.a[l] = q[k].id ;
              l++;
            }
          }
      }
  cout<<"}"<<endl;
}
void difference(customer m[],customer n[],int m_size , int n_size)
{
  int l=0,flag=0;
  cout<<"{";
    for(int i=0;i<m_size;i++)
      {
        flag =0;
        for(int j=0;j<n_size;j++)
          {
            if(m[i].id==n[j].id)
            {
              flag = 1;
            }
          }
        if(flag == 0)
        {
          m[i].display();
          cout<<",";
        }
      }
  cout<<"}"<<endl;
}
int main()
{ 
  int choice,np,nb,no;
      cout<<"Enter the number of customer who eat Pizza\n";
      cin>>np;
      customer pizza[np];
      cout<<"Enter the details of the customers\n\n";
      for(int i=0;i<np;i++)
        {
          pizza[i].accept();
        }
  cout<<endl<<"{";
        for(int i=0;i<np;i++)
        {
          pizza[i].display();
          cout<<",";
        }
  cout<<"}"<<endl;
      
      cout<<"Enter the number of customer who eat Burger\n";
      cin>>nb;
      customer burger[nb];
      cout<<"Enter the details of the customers\n";
      for(int i=0;i<nb;i++)
        {
          burger[i].accept();
        }
  cout<<endl<<"{";
        for(int i=0;i<nb;i++)
        {
          burger[i].display();
          cout<<",";
        }
  cout<<"}"<<endl;
       cout<<"Enter the number of customer who not eat both pizza and burger\n";
      cin>>no;
      customer other[no];
      cout<<"Enter the details of the customers\n";
      for(int i=0;i<no;i++)
        {
          other[i].accept();
        }
  cout<<endl<<"{";
        for(int i=0;i<no;i++)
        {
          other[i].display();
          cout<<",";
          }
  cout<<"}";
  cout<<"\nThe Total number of Orders are\t"<<np +nb + no<<endl;
  cout<<"\nThe Customer who eat both pizza and burger are"<<endl;
  intersect(pizza,burger,np,nb);
  cout<<"\nThe Customer who eat either pizza or burger are"<<endl;
  unon(pizza,burger,np,nb);
  cout<<"\nThe Customer who eat pizza but not burger are"<<endl;
  difference(pizza,burger,np,nb);
  cout<<"\nThe Customer who eat burger but not pizza are"<<endl;
  difference(burger,pizza,nb,np);
  cout<<"\nThe Customer who do not eat both burger and pizza are"<<endl<<"{";
  for(int i=0;i<no;i++)
    {
      other[i].display();
      cout<<",";
    }
  cout<<"}"<<endl;
  
  return 0;
}
