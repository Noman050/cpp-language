#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
   int n,a,b,c;
   char ch;
   do{ cout<<"What Operation Do You Want To Do??\n";
    cout<<"Press 1 For Addition\n";
    cout<<"Press 2 For Subtraction\n";
    cout<<"Press 3 For Multiplication\n";
    cout<<"Press 4 For Division\n";
    cout<<"Press 5 For Modulus\n";
    cin>>n;
    cout<<"Enter 1st Number\n";
    cin>>a;
    cout<<"Enter 2nd Number\n";
    cin>>b;
    switch (n){
    case 1:c=a+b;
	cout<<"Addition Of Two Numbers is \n"<<c;	
    break;
	case 2:c=a-b;
	cout<<"Subtraction Of Two Numbers is \n"<<c;	
    break;
	case 3:c=a*b;
	cout<<"Multiplication Of Two Numbers is \n"<<c;	
    break;
	case 4:c=a/b;
	cout<<"Division Of Two Numbers is \n"<<c;	
    break;
	case 5:c=a%b;
	cout<<"Modulus Of Two Numbers is \n"<<c;	
    break;
	default:
	cout<<"Wrong Inpu\n"; 	
	}
	cout<<"\nDo You Want To Continue Y/N ??\n";
	ch=getche();
	}
	while (ch=='y');
	getch();
	return 0;
}
