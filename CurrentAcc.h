#include<iostream>
#include"BankAccount.h"
using namespace std;

class CurrentAcc:public BankAccount
{
	private:
		double irate;
		double totalbal;
	public:
		CurrentAcc();
		double calinterest();
		void Display();
};
