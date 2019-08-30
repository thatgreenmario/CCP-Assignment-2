#include<iostream>
#include<cstring>
using namespace std;

class Time
{
	int hour;
	int minutes;
	int seconds;

	public:
	Time();
	Time(int h,int m,int s);
	void Accept();
	void Display();
        static void Diff(Time *t);
	static void Compare(Time *t1);

};

