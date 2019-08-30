#include<iostream>
#include"player.h"
using namespace std;

void Sortage(player *a,int length);
void Sortname(player *n,int length);

int main()
{

	int size=0;
	cout<<"Enter the  Number of Players"<<endl;
	cin>>size;
	player *p=new player[size];

	for(int i=0;i<size;i++)
	{
		p[i].Accept();
	}
	for(int i=0;i<size;i++)
        {
                p[i].Display();
        }


	Sortage(p,size);
	cout<<"Players sorted acc to age:   "<<endl;
	for(int i=0;i<size;i++)
        {
                p[i].Display();
        }

	Sortname(p,size);
	cout<<"Players sorted acc. to name:"<<endl;
	for(int i=0;i<size;i++)
        {
                p[i].Display();
        }

	return 0;
}
