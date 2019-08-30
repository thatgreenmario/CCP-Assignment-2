#include<iostream>
#include<cstring>
using namespace std;
class student
{
	int rollno;
	string name;
	string course;

	public:

	student();
	student(int a,string b, string c);
	//~student();
	void accept();
	void display();
	static void find(student *s,int roll,int size);
};

