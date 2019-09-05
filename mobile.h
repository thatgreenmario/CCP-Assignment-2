#include<iostream>
#include<string>
using namespace std;
class Mobile
{
	private:
	
		string ModelNo;
		string Price;
		string Manufacturer;
		int Quantity;

	public:
		
		void add();
		void display();
		static void searchtype(Mobile *);
		static void searchname(Mobile *);
		

};

