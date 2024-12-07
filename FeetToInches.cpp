#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double m,f,i;
	cout<<"Enter The Distance In Meters\n";
	cin>>m;
	f=m*3.28084; //1 meter=3.28084 feets
	i=m*39.3701; //1 meter=39.3701 inches
	cout<<"Distance In Feets Is ="<<f<<"\nDistance In Inches Is ="<<i<<endl;
	getch();
	return 0;
}
