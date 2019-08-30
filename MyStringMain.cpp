#include<iostream>
#include"MyString.h"
using namespace std;
int main()
{
	MyString m1("cdac");
	m1.Display();
	MyString m2;
	m2.Accept();
	m2.Display();
	MyString m3(m1);
	m3.Display();
	
	return 0;
}

