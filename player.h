#include<iostream>
#include<string>
using namespace std;
class player
{
	string name;
	int age;
	string country;

	public:

	player();
	player(string n,int a,string c);
	void Accept();
	void Display();
	int Getage();
	string Getname(); 
};
