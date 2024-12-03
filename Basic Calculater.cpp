#include<iostream>
#include<conio.h>
using namespace std;   // using namespace is compulsary if i missed it then cin will not be recognised by the compiler
int main()
{
	int n,a,b,c;
	char Choice;
	do{ // using do while loop with swith statement
	cout<<"What operation do you want to do??\n";
	cout<<"Press 1 for Addition\n";
	cout<<"Press 2 for Subtration\n";
	cout<<"Press 3 for Multiplication\n";
	cout<<"Press 4 for Division\n";
	cout<<"Press 5 for Modulus\n";
	cin>>n;
	cout<<"\nEnter a number\n";
	cin>>a;
	cout<<"\nEnter 2nd number\n";
	cin>>b;
	switch(n)   // "n" in which I have stored the choice digit like press 1 for addition.
	{
	case 1:c=a+b;
	cout<<"\nAdition Of Two Numbers Is ="<<c;
	case 2:c=a-b;
	cout<<"\nSubtraction Of Two Numbers Is ="<<c;
	case 3:c=a*b;
	cout<<"\nMultiplication Of Two Numbers Is ="<<c;
	case 4:c=a/b;
	cout<<"\nDivision Of Two Numbers Is ="<<c;break;
	case 5:c=a%b;
	cout<<"\nModulus Of Two Numbers Is ="<<c;break;
	default:cout<<"\nWrong Input\n";
	}	
	cout<<"\n\nDo You Want To Continue y/n\n?";
	Choice=getche(); // to store the choiced letter
	}
	 while(Choice=='y');                                                          	
    getch();
	return 0;
}
