#include<iostream>
#include<string>

using namespace std;

class Payslip
{
	private:
		float EmpNo;
		string EmpName;
		float DA;
		float HRA;
		float BasicSalary;

	public:
		Payslip();
		Payslip(float eno,string E,float d,float h,float b);
		void Accept();
		void Display();
		void Salary();
};
