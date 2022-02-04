#include <iostream>
using namespace std;
main()
{
	int d,m,y,cd,cm,cy,mon=0,year=0,days=0;
	cout<<"enter current date dd\mm\yy : ";
	cin >>cd>>cm>>cy;
	cout <<"enter your DOB dd\mm\yy : ";
	cin>>d>>m>>y;
	if(cd<d)
	{
	
	if(m==2){
		if(y%4==0)
	cd=29+cd;
	else
	cd=28+cd;
	}
	else if(m==1||m==3||m==5||m==7||m==9||m==11)
	cd=31+d;
	else
	cd=30+cd;
	cm=cm-1;
   }
   if(cm<m)
   {
   	cy=cy-1;
   	cm=cm+12;
   }
   year=cy-y;
   mon=cm-m;
   days=cd-d;
	
	cout <<"your age is "<<year<<" year "<<mon<<" month "<<days<<" days ";
	return 0;
	
}






	
