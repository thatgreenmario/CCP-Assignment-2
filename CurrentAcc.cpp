#include<iostream>
#include"CurrentAcc.h"

using namespace std;


CurrentAcc::CurrentAcc()
{
	irate=5.5;
	totalbal=0;
}

double CurrentAcc::calinterest()
{
	double interest=(amount*1*irate)/100;

	totalbal=amount+interest;

}

void CurrentAcc::Display()
{
	cout<<"Total Balance:"<<totalbal<<endl;
}
