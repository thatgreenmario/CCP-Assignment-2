#include<iostream>
#include<string>
using namespace  std;

class BankAccount
{
	protected:
		double amount;
	public:
		
		virtual double deposit();
		virtual double withdrawl();
};

