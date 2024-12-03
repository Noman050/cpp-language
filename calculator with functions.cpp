#include<iostream>
#include<conio.h>
using namespace std;
void add(float a,float b)
{
	cout<<"Addition Is: "<<a+b;
}
void sub(float a,float b)
{
	cout<<"Subtraction Is: "<<a-b;
}
void mul(float a,float b)
{
	cout<<"Multiplication Is: "<<a*b;
}
void div(float a,float b)
{
	cout<<"Division Is: "<<a/b;
}
int main()
{
	float a,b;
	int c;
	char ch;
do{
    cout<<"Enter First Number\n";
	cin>>a;
	cout<<"Enter 2nd Number\n";
	cin>>b;
	cout<<"Press 1 For Addition\nPress 2 For Subtraction\nPress 3 For Multilication\nPress 4 For Division\n";
	cin>>c;
   switch(c)
   {
   	case 1:
	   add(a,b);break;
   	case 2:sub(a,b);break;
   	case 3:mul(a,b);break;
   	case 4:
   		if(b==0)
   		{ cout<<"Sorry Division Can't be Performed Because Denominater is 0\n";}
   		
   		div(a,b);
		   break;
   		default:
   			cout<<"Invalid Input\n";
   }
   cout<<"\ndo you want to continue press y/n?\n";
   cin>>ch;
   }while(ch=='y');
   getch();
   return 0;
}
