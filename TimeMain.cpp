#include<iostream>
#include"Time.h"
using namespace std;

int main()
{
	Time *tp=new Time[2];

//	tp[0].Accept();
//	tp[1].Accept();

//tp[0].Display();
//	tp[1].Display();
	
//	Time::Compare(tp);
	Time::Diff(tp);

	return 0;
}
