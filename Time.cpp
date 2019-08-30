#include<iostream>
#include"Time.h"
using namespace std;

Time::Time()
{
	hour=0;
	minutes=0;
	seconds=0;
}

Time::Time(int h,int m,int s)
{
	hour=h;
	minutes=m;
	seconds=s;

}

void Time::Accept()
{	
	cout<<"Enter the hours"<<endl;
	cin>>hour;
	cout<<"Enter the minutes"<<endl;
	cin>>minutes;
	cout<<"Enter the seconds"<<endl;
	cin>>seconds;
}
void Time::Display()
{
	cout<<"The time is-"<<hour<<":"<<minutes<<":"<<seconds<<endl;

}

void Time::Compare(Time *t1)
{
	int time1 = t1[0].hour*3600+t1[0].minutes*60+t1[0].seconds;
	int time2 = t1[1].hour*3600+t1[1].minutes*60+t1[0].seconds;
	
	if(time2>time1)
	{
		cout<<"The Second time is ahead of first time" ;
	}
	else if(time1>time2)
	{
		cout<<"The First time is ahead of second time" ;
	}
	else
	{
		cout<<"Both time are same";
	}
}

void Time::Diff(Time *t1)
{
	/*int time1 = t1[0].hour*3600+t1[0].minutes*60+t1[0].seconds;
	int time2 = t1[1].hour*3600+t1[1].minutes*60+t1[0].seconds;
	

	cout<<time1<<endl;
	cout<<time2<<endl;

	int secdiff = time2-time1;
	*/
	int secdiff =3800;
	
	if(secdiff<0)
	{
		secdiff=-secdiff;
	}

	cout<<secdiff<<endl;


	int hours= secdiff/3600;

	secdiff= secdiff%3600;

	int min = secdiff/60;

	int sec=secdiff%60;

	cout<<"Difference is "<<hours<<":"<<min<<":"<<sec<<endl;
	
}






