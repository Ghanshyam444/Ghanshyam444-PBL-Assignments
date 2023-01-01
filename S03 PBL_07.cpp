/*Write a class template to represent a generic vector.
Include member functions to perform the following tasks: 
a To create the vector.
b To modify the value of a given element.
c To multiply the vector by a scalar value.
d To display the vector in the form (10, 20, 30)*/

#include<iostream>
using namespace std;
template<class T>
class vector
{
    T v[20];
    int size;
    public:
        void create();
        void modify();
        void mult();
        void display();
};

template<class T>
void vector<T>::create()
{
    int i;
    T value;
    char ans;
    size=0;
    do{
        cout<<"Enter the index"<<endl;
        cin>>i;
      cout<<"Enter the value"<<endl;
      cin>>value;
        v[i]=value;
        size++;
        cout<<"Do you want more elements?\n Enter 'Y'or 'y' to enter more elements"<<endl;
        cin>>ans;
    }while(ans =='y'||ans =='Y');
}

template<class T>
void vector<T>::modify()
{
    int key;
    T newval;
    cout<<"Enter index for modificaion:"<<endl;
    cin>>key;
    cout<<"Enter new value:"<<endl;
    cin>>newval;
    v[key]=newval;
}

template<class T>
void vector<T>::mult()
{
    int i;
    int scalarval;
    cout<<"Enter scalar value for multiplication"<<endl;
    cin>>scalarval;
    for(i=0;i<size;i++)
    v[i]=v[i]*scalarval;
}

template<class T>
void vector<T>::display()
{
    int i;
   
    cout<<"Size of vector is:"<<endl<<size;
    cout<<"Elements in vector are:"<<endl;
    cout<<"(";
    for(i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<")";
}

int main()
{
    int ch;
    vector<int>obj;
    cout<<"\nProgram for template class";
    do
    {
        cout<<"\nMAIN MENU";
        cout<<"\n1.Create";
        cout<<"\n2.Display";
        cout<<"\n3.Mult";
        cout<<"\n4.Modify";
        cout<<"\n0.Exit";
        cout<<"\nEnter your choice:"<<endl;
        cin>>ch;
       
        switch(ch)
        {
            case 1:
                obj.create();
                break;
               
            case 2:
                obj.display();
                break;
               
            case 3:
                obj.mult();
                break;
               
            case 4:
                obj.modify();
                break;
               
            case 0:
                cout<<"\nExit\n";
                break;
               
            default:
                cout<<"\nInvalid choice";
                break;
        }
    }while(ch!=0);
    return 0;
}
