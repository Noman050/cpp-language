#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a=50,b=10;
	cout<<"Before Swapping \na="<<a<<"\t,b="<<b<<endl;
	a=a+b;  //a=60 (50+10)
	b=a-b;  //b=50 (60-10)
	a=a-b;  //a=10 (60-50)
	cout<<"After Swapping \na="<<a<<"\t,b="<<b<<endl;
	getch();
	return 0;
}
