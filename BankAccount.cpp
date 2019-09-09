#include<iostream>
#include"BankAccount.h"
using namespace std;


double BankAccount::deposit()
{
	double dep=0;
	cout<<"Enter the amount you want to deposit"<<endl;
	cin>>dep;

	amount=amount+dep;

	return amount;
}

double BankAccount::withdrawl()
{
	double withd=0;
	cout<<"Enter the amount you want to withdraw"<<endl;
	cin>>withd;

	amount=amount-withd;

	return amount;
}
