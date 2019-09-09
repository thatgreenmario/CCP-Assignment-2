#include<iostream>
#include"SavingAccount.h"
#include"CurrentAcc.h"

int main()
{

	SavingAccount s;
	
	cout<<"For Saving Account"<<endl;
	s.deposit();
	s.withdrawl();
	s.calinterest();
	s.Display();
          
	
	cout<<"For Current Account"<<endl;
	CurrentAcc c;
	c.deposit();
	c.withdrawl();
	c.calinterest();
	c.Display();
 return 0;
}

