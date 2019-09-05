#include"mobile.h"
using namespace std;

void Mobile::add()
{	
	cout<<"Enter mobile Model Number : "<<endl;
	cin>>ModelNo;
	cout<<"Enter Price : "<<endl;
	cin>>Price;
	cout<<"Enter Manufacturer : "<<endl;
	cin>>Manufacturer;
	cout<<"Enter Quantity : "<<endl;
	cin>>Quantity;
}

void Mobile::display()
{
	cout<<"Mobile Model No: "<<ModelNo<<"Price : "<<Price<<"Manufacturer :"<<Manufacturer<<"Quantity : "<<Quantity<<endl;
}

void Mobile::searchname(Mobile *m)
{	string model;
	cout<<"Enter the Mobile you want to check"<<endl;
	cin>>model;
	for(int i=0;i<5;i++)
	{
		if(m[i].Manufacturer==model)
		{
			cout<<"The Quantity of this Moblie is "<<m[i].Quantity<<endl;
		}
		else
		{
			cout<<"This Model is Currently not available"<<endl;		
		}

	}
	
}

void Mobile::searchtype(Mobile *s)
{
	string modno;
	cout<<"Enter the model no you want to check"<<endl;
	cin>>modno;
	for(int i=0;i<5;i++)
	{
		if(m[i].ModelNo==modno)
		{
			cout<<"The Model is currently available"<<endl;
		}
		else
		{
			cout<<"This Model is Currently not available"<<endl;		
		}

	}
	
}
