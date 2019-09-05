#include<iostream>
#include<string>
#include"Payslip.h"
using namespace std;

Payslip::Payslip()
{
	EmpNo=0.0;
	EmpName=" ";
	DA=0.0;
	HRA=0.0;
	BasicSalary=0.0;

}
Payslip::Payslip(float eno,string E,float d,float h,float b)
{
	EmpNo=eno;
        EmpName=E;
        DA=d;
        HRA=h;
        BasicSalary=b;
}
void Payslip::Accept()
{
	cout<<"Enter the Employee Id No"<<endl;
	cin>>EmpNo;
	
	cout<<"Enter the Employee Name"<<endl;
	getchar();
	getline(cin,EmpName);
	
	cout<<"Enter the Daily Allowance"<<endl;
	cin>>DA;

	cout<<"Enter the Housing Rent Allowance"<<endl;
	cin>>HRA;

	cout<<"Enter the basic salary"<<endl;
	cin>>BasicSalary;

}

void Payslip::Display()
{
	cout<<"Employee ID No:"<<EmpNo<<endl;
	cout<<"Employee Name:"<<EmpName<<endl;
	cout<<"Daily Allowance:"<<DA<<endl;
	cout<<"Housing Rent Allowance:"<<EmpNo<<endl;
	cout<<"Basic Salary:"<<BasicSalary<<endl;

}

void Payslip::Salary()
{
	float Sal=0.0;

	Sal=BasicSalary+DA+HRA;

	cout<<"Salary of "<<EmpName<<":"<<Sal<<endl;

}
