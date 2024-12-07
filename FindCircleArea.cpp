#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float rad,dia,circum,area; // rad=radius ,dia=diameter ,circum=circumference 
	cout<<"Enter The Radius Of The Circle\n";
	cin>>rad;
	dia=rad*2;
	circum=2*3.14159*rad;
	area=3.14159*rad*rad;
	cout<<"Cicle's Diameter is ="<<dia<<"\nCircle's Circumference is ="<<circum;
	cout<<"\nCircle's Area is ="<<area;
	getch();
	return 0;
}
