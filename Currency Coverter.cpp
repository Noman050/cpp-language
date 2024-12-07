#include<iostream>
using namespace std;
int main()
{
	float Ad,Bp,Pr,Gd,Jy;
	cout<<"Enter The Amount In Dollers\n";
	cin>>Ad;
	Bp=Ad/1.487;
	Pr=Ad/72;
	Gd=Ad/0.584;
	Jy=Ad/0.00955;
	cout<<"Amount In British Pound Is\n"<<Bp<<"\nAmount In Pakistani Rupee Is\n"<<Pr<<"\nAmount In Germen Deutschemark Is\n"<<Gd;      
	cout<<"\nAmount In Japanese Yen Is\n"<<Jy;
	return 0;
	}
