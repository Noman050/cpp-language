#include<iostream>
using namespace std;
int main()
{
	float wp,hi,bmi;
	cout<<"Enter Weight In Pounds\n";
	cin>>wp;
	cout<<"Enter Height In Inches\n";
	cin>>hi;
	bmi=(wp*703)/(hi*hi);
	cout<<"Users BMI = "<<bmi;
	if(bmi<18.5){cout<<"\nUnderweight\n";}
	else if(bmi>30){cout<<"\nOverweight\n";}
	else{cout<<"\nHealthy";}
	return 0;
	}
