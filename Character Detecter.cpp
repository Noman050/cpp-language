#include<iostream>
#include<conio.h>
using namespace std;
 int main()
{ 
    char r;
	cout<<"Enter The Character\n";
	cin>>r;
    if(r>='A' && r<='Z')
    cout<<"Entered Character Is A Capital case letter\n"<<r;
	else if(r>='a' && r<='z')
	cout<<"Entered Character Is Small case letter\n"<<r;
	else if(r>='0' && r<='9')
    cout<<"Entered Character Is Digital Number\n"<<r;
    else
    cout<<"Entered Character Is a Special Symbol\n"<<r;                                                          	
    getch();
    return 0;
}
