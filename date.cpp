#include<iostream>
#include<string.h>
#include"date.h"
using namespace std;


Date::Date()
{
	day1=0;
	day2=0;
	month1=0;
	month2=0;
	year1=0;
	year2=0;
	days=0;
}

void Date::Accept()
{
	cout<<"Enter the first date in the format dd/mm/yy"<<endl;
	cin>>day1>>month1>>year1;

	cout<<"Enter the second date in the format dd/mm/yy"<<endl;
	cin>>day2>>month2>>year2;
}

void Date::Display()
{
	cout<<day1<<"/"<<month1<<"/"<<year1<<endl;
	cout<<day2<<"/"<<month2<<"/"<<year2<<endl;
}












void Date::Diff()
{
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year=365;
	int leapyear=366;
	
	int year1=2017;
	int year2=2019;

	//int day1=21;  
	//int month1 =4 ; 
	

	//int day2=22; 
	//int month2=6;
	static int days;
	int i=0;

	for (int i = month1+1;i<=month2-1;i++)
	{
		days=days+month[i];
	}
	//cout<<days<<endl;
	days = 30-day1+days+day2;
	cout<<days;

	
	int year=year1-year2;


