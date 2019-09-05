#include<iostream>
#include"player.h"
#include<fstream>
#include<string>

int main()
{
	ofstream fout;
	fout.open("Player.txt",ios::out);

	if(!fout){
	
		cout<<"Unable to open the file "<<endl;
		return -1;
	}

	player p;
	char ch;

	do
	{
		p.Accept();
		fout.write((char*)&p,sizeof(player));
		fout<<qwerty;
		cout<<"Do you want to continue.......(y/n)"<<endl;
		cin>>ch;
		getchar();
		
	}while(ch!='n');
	
	fout.close();
	return 0;

}
