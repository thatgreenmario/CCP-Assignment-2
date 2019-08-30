#include<iostream>
using namespace std;
class MyString
{
	private:
		char *p;
		int size;
	
	public:
		MyString();
		MyString(const char *);
		MyString(MyString &s);
		void Display();		
		void Accept();
		~MyString();
};
