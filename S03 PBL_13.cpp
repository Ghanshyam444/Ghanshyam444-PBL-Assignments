/*Write a C++ program to print all the repeated numbers 
with their frequency in an array in minimum time complexity*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,size;
    cin>>size;
    int a[size];
for(int k=0;k<size;k++)
{
cin>>a[k];
}
    sort(a,a+size);
for(i =0;i<size;i++)
{
int count =1;
for(j = i+1;j<size;j++)
{
if(a[i]==a[j])
{count ++ ;
a[j]= -1;}
  }
    if(a[i]!= -1)
  cout<<a[i]<<"-"<<count<<endl;
}
  return 0;
  }
