#include<iostream>
using namespace std;
class Address
{
	private:
	
		string houseno,colony,area,city,pincode;
	
	public:
	
		Address();
		Address(string a,string b,string c,string d,string e);
		void Accept();
		void Display();
		bool operator==(const Address);
};
		
