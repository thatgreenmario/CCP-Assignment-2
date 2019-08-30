#include<iostream>
#include"Student.h"
using namespace std;

int main()
{

	int no;
	cout<<"Enter the number of students"<<endl;
	cin>>no;

	student *sp=new student[no];

	for(int i=0;i<no;i++)
	{
	    sp[i].accept();
	}

	for(int i=0;i<no;i++)
	{
		sp[i].display();
	}

	int num;
	cout<<"Enter the roll number you want to search"<<endl;
	cin>>num;
	
	student::find(sp,num,no);

	return 0;
}
