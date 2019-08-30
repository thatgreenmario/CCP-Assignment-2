#include<iostream>
//#include<string>
#include"player.h"
using namespace std;

player::player()
{
	name="Virat Kohli";
	age=30;
	country="INDIA";
}

player::player(string n,int a,string c)
{
	name = n;
	age=a;
	country=c;
}

void player::Accept()
{
	cout<<"Enter the name of player"<<endl;
	getchar();
	getline(cin,name);
	cout<<"Enter the age of player"<<endl;
	cin>>age;
	cout<<"Enter the Nationality of the player"<<endl;
	getchar();
	getline(cin,country);
}
void player::Display()
{
	cout<<"Name::"<<name<<"Age: "<<age<<"Nationality:"<<country<<endl;

}

int player::Getage()
{
	return age;
}
string player::Getname()
{
	return name;
}

//Complex::operator

void Sortname(player *n,int length)
{       
	
	player temp;
	for(int i=0;i<length;i++)
	{
		for(int j=i+1;j<length;j++)
	
		
			if(n[i].Getname()>n[j].Getname())
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}

		
	}
}


void Sortage(player *n, int length)
{
        player temp;
        for(int i=0;i<length-1;i++)
        {
                for(int j=i+1;j<length;j++)
                {
                        if(n[i].Getage()>n[j].Getage())
                        {
                                temp=n[i];
                                n[i]=n[j];
                                n[j]=temp;
                        }

                }
        }
}

