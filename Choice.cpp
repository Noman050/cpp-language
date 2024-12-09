#include<iostream>
using namespace std;
int main()
{
	int N1,N2,choice;
	cout<<"Enter Two Numbers\n";
	cin>>N1>>N2;
	cout<<"Press 1 For Addition Press 2 For Subtraction And Press Any Digit To Terminate The Programme\n";
	cin>>choice;
	if(choice==1)
	{
		cout<<"Addition Of Two Numbers Is\n"<<N1+N2;
	}
	if(choice==2)
	{
		cout<<"Subtraction Of Two Numbers Is\n"<<N1-N2;
	}
	else
	cout<<"Press Any Key To Terminate The Programme\n";
	return 0;
}
