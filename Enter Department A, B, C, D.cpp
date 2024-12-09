#include<iostream>
using namespace std;
int main()
{
	char department;
	double raise,salary;
	cout<<"Enter Department A, B, C, D in either Capital case or lower case\n";
	cin>>department;
	cout<<"Enter Salary\n";
	cin>>salary;
	switch(department)
	{
		case 'A':
		case 'a':
		case 'B':
		case 'b':
		raise=(2.0/100)*salary;
		cout<<"The Raise Amount Is "<<raise;break;
		case 'C':
		case 'c':
		raise=(1.5/100)*salary;
		cout<<"The Raise Amount Is "<<raise;break;
		case 'D':
		  case 'd':
		raise=(3.0/100)*salary;
		cout<<"The Raise Amount Is "<<raise;break;
		default:
		cout<<"Wrong Input";
	}
	return 0;
}
