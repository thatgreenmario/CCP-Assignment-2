#include<iostream>
#include"SavingAccount.h"

using namespace std;


SavingAccount::SavingAccount()
{
	irate=4;
	totalbal=0;
}

double SavingAccount::calinterest()
{
	double interest=(amount*1*irate)/100;

	totalbal=amount+interest;

}

void SavingAccount::Display()
{
	cout<<"Total Balance:"<<totalbal<<endl;
}
