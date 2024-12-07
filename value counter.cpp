#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int l;
	cout<<"Enter An integer number between 0-255\n";
	cin>>l;
	cout<<"The Relevant Character For  "<<l<<"  is\n"<<(char)l;
	getch();
	return 0;
}
