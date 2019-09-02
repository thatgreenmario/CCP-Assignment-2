#include"address.h"
using namespace std;

Address::Address()
{
}

Address::Address(string a,string b,string c,string d,string e):houseno(a),colony(b),area(c),city(d),pincode(e)
{
}

void Address::Accept()
{
	cout<<"Enter Houseno"<<endl;
	getline(cin,houseno);
	cout<<"Enter Colony"<<endl;
	getline(cin,colony);
	cout<<"Enter Area"<<endl;
	getline(cin,area);
	cout<<"Enter City"<<endl;
	getline(cin,city);
	cout<<"Enter Pincode"<<endl;
	getline(cin,pincode);
}

void Address::Display()
{
	cout<<"Address is : "<<houseno<<" "<<colony<<" "<<area<<" "<<city<<" "<<pincode;
}

bool Address::operator==(const Address a)
{
	if(houseno==a.houseno && colony==a.colony && area == a.area && city == a.city)
		{
			return 1;
		}
}
	


