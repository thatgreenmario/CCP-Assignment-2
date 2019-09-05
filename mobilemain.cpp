#include<iostream>
#include"mobile.h"
using namespace std;
int main()
{
	int n,c=1,x,i=0;
	cout<<"Enter total number of mobiles"<<endl;
	cin>>n;
	Mobile m[5];
	Mobile p;

	while(c!=0)
	{
		cout<<"-----------THe Mobile Shop------------"<<endl;
		
		cout<<"1.) Add Mobile"<<endl;
		cout<<"2.) Display List of available mobile"<<endl;
		cout<<"3.) Find Quantity of particular mobile type"<<endl;
		cout<<"4.) Find out availability of particular model"<<endl;
		
		cout<<"\n Enter your choice ";
		cin>>x;
		switch(x)
		{
		case 1:
				p.add();
				m[i]=p;
				i++;
				break;
		case 2:
				//p.display();

				for(int k=0;k<i;k++)
					m[k].display();
	
				break;
		
		case 3: 	
				Mobile::searchname(m);
				break;
		case 4:

				Mobile::searchtype(m);
				break;		
		default:
				cout<<"Wrong choice";
				break;
		}
		cout<<"Do you want to continue ?1=yes 0=no";
		cin>>c;

}
return 0;
}				
		

