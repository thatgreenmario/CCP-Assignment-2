#include<iostream>
#include<string.h>
#include"Student.h"
using namespace std;

student::student()
{
	rollno=0;
	name="Omkar";
	course="PG-DAC";
}

student::student(int a,string b,string c)
{
	rollno =a;
	name=b;
	course=c;
}
void student::accept()
{
	cout<<"Enter the roll number"<<endl;
	cin>>rollno;

	cout<<"Enter the name"<<endl;
	cin.get();
	getline(cin,name);

	cout<<"Enter course name"<<endl;
	cin.get();
	getline(cin,course);
}

void student::display()
{
cout<<"Roll no of student is: "<<rollno<<endl;
	cout<<"Name of the student is: "<<name<<endl;
	cout<<"Course of the student is: "<<course<<endl;	
}

void student::find(student *s,int roll, int size)
{
	for(int i=0;i<size;i++)
	{
		if(s[i].rollno==roll)
		{
			cout<<"Students name is: "<<s[i].name<<endl;
			cout<<"Students course is: "<<s[i].course<<endl;
		}
	}
}
