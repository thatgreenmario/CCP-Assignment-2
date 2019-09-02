#include"address.h"
using namespace std;

int main()
{
	Address *p=new Address[2];
	p[0].Accept();
	p[1].Accept();
	if(p[0]==p[1])
	{
		cout<<"Same";
	}else
		cout<<"Not Same";


	return 0;
}
