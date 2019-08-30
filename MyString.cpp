#include"MyString.h"
#include<cstring>
#include<iostream>
using namespace std;
MyString::MyString()
{
	size=0;
	p= new char;
	*p='\0';
}
MyString::MyString(const char* s)
{
	size=strlen(s);
	p=new char[size+1];
	strcpy(p,s);
}
void MyString::Accept()
{
	cout<<"Enter Size";
	cin>>size;
	p=new char[size+1];
	cout<<"Enter String";
	cin>>p;
}
void MyString::Display()
{
	cout<<size<<" "<<p;
}
MyString::~MyString()
{
	delete []p;
}
MyString::MyString(MyString &s)
{
	size=s.size;
	p=s.p;
}
