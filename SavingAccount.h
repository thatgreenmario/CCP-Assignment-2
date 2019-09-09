#include<iostream>
#include"BankAccount.h"
using namespace std;

class SavingAccount:public BankAccount
{
	private:
		double irate;
		double totalbal;
	public:
		SavingAccount();
		double calinterest();
		void Display();
};
